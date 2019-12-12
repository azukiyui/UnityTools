﻿
#define USE_OSC
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityTools.Networking
{
    public class OscSenderTool : MonoBehaviour
    {
        #if USE_OSC

        [SerializeField] protected string ip = "127.0.0.1";
        [SerializeField] protected short port = 7777;
        protected OscJack.OscClient client;

        protected virtual void Start()
        {
            this.OnInit();
        }
        protected void OnInit()
        {
            this.CleanUp();
            this.client = new OscJack.OscClient(this.ip, this.port);
        }

        protected void CleanUp()
        {
            if (this.client != null) this.client.Dispose();
        }

        #endif
    }
}