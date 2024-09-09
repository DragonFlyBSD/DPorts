--- src/openvpn/tun.c.orig	2024-08-19 15:48:13 UTC
+++ src/openvpn/tun.c
@@ -1565,7 +1565,7 @@ do_ifconfig_ipv4(struct tuntap *tt, cons
         add_route(&r, tt, 0, NULL, es, NULL);
     }
 
-#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
+#elif defined(TARGET_FREEBSD)
 
     /* example: ifconfig tun2 10.2.0.2 10.2.0.1 mtu 1450 netmask 255.255.255.255 up */
     if (tun)       /* point-to-point tun */
@@ -1584,6 +1584,49 @@ do_ifconfig_ipv4(struct tuntap *tt, cons
     argv_msg(M_INFO, &argv);
     openvpn_execve_check(&argv, es, S_FATAL, "FreeBSD ifconfig failed");
 
+#elif defined(TARGET_DRAGONFLY)
+    in_addr_t remote_end = INADDR_ANY;  /* for "virtual" subnet topology */
+
+    /* example: ifconfig tun2 10.2.0.2 10.2.0.1 mtu 1450 netmask 255.255.255.255 up */
+    if (tun)       /* point-to-point tun */
+    {
+        argv_printf(&argv, "%s %s %s %s mtu %d netmask 255.255.255.255 up",
+                    IFCONFIG_PATH, ifname, ifconfig_local,
+                    ifconfig_remote_netmask, tun_mtu);
+    }
+    else if (tt->type == DEV_TYPE_TUN && tt->topology == TOP_SUBNET)
+    {
+        remote_end = create_arbitrary_remote(tt);
+        argv_printf(&argv, "%s %s %s %s mtu %d netmask %s up", IFCONFIG_PATH,
+                    ifname, ifconfig_local, print_in_addr_t(remote_end, 0, &gc),
+                    tun_mtu, ifconfig_remote_netmask);
+    }
+    else
+    {
+        /*
+         * DragonFly has distinct tun and tap devices
+         * so we don't need the "link0" extra parameter to specify we want to do
+         * tunneling at the ethernet level
+         */
+        argv_printf(&argv, "%s %s %s netmask %s mtu %d",
+                    IFCONFIG_PATH, ifname, ifconfig_local,
+                    ifconfig_remote_netmask, tun_mtu);
+    }
+    argv_msg(M_INFO, &argv);
+    openvpn_execve_check(&argv, es, S_FATAL, "DragonFly ifconfig failed");
+
+    /* Add a network route for the local tun interface */
+    if (!tun && tt->type == DEV_TYPE_TUN && tt->topology == TOP_SUBNET)
+    {
+        struct route_ipv4 r;
+        CLEAR(r);
+        r.flags = RT_DEFINED;
+        r.network = tt->local & tt->remote_netmask;
+        r.netmask = tt->remote_netmask;
+        r.gateway = remote_end;
+        add_route(&r, tt, 0, NULL, es, NULL);
+    }
+
 #elif defined(TARGET_AIX)
     {
         /* AIX ifconfig will complain if it can't find ODM path in env */
