﻿using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
namespace UnityTools.Common
{
    [Serializable]
    public class PCInfo
    {
        public string name = "OutputPC";
        public string ipAddress = "127.0.0.1";
        public bool isServer = false;
    }
    [Serializable]
    public class Environment
    {
        public enum Runtime
        {
            Debug,//local editor debug
            DebugLog,//local editor debug log
            DebugBuild,//production pc debug, disable data sim functions, but allow to configuring localy
            Production,// production
        }

        public Runtime runtime = Runtime.Debug;
    }
    public class Launcher<T> : MonoBehaviour where T : class, new()
    {
        public interface ILauncherUser
        {
            void OnInit(T data);
            void OnDeinit(T data);
            void OnReload(T data);

            Environment RuntimEnvironment { get; set; }

            //higher order of user executes after than lower order user
            int Order { get; }
        }

        [SerializeField] protected bool global = false;
        [SerializeField] protected T data = new T();
        protected Environment environment;
        protected List<ILauncherUser> userList = new List<ILauncherUser>();

        protected virtual void ConfigureEnvironment()
        {
            this.environment = new Environment();
        }

        protected virtual void OnEnable()
        {
            this.CleanUp();
            if (this.global)
            {
                foreach (var g in ObjectTool.FindRootObject())
                {
                    this.userList.AddRange(g.GetComponents<ILauncherUser>());
                    this.userList.AddRange(g.GetComponentsInChildren<ILauncherUser>());
                }
            }
            else
            {
                this.userList.AddRange(this.GetComponents<ILauncherUser>());
                this.userList.AddRange(this.GetComponentsInChildren<ILauncherUser>());
            }

            this.ConfigureEnvironment();

            foreach (var u in this.userList) u.RuntimEnvironment = this.environment;

            this.userList = this.userList.OrderBy(ul => ul.Order).ToList();
            foreach (var u in this.userList)
            {
                if (this.environment.runtime == Environment.Runtime.DebugLog) Debug.Log("Init order " + u.Order + " " + u.ToString());
                u.OnInit(this.data);
            }
        }
        protected virtual void OnDisable()
        {
            foreach(var u in this.userList)
            {
                u.OnDeinit(this.data);
            }
            this.CleanUp();
        }

        protected virtual void OnReload()
        {
            foreach (var u in this.userList)
            {
                u.OnReload(this.data);
            }
        }

        protected void CleanUp()
        {
            this.userList.Clear();
        }
    }
}
