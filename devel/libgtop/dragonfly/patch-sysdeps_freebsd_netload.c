TODO: Implement for DragonFly

--- sysdeps/freebsd/netload.c.intermediate	2014-11-03 08:58:10 UTC
+++ sysdeps/freebsd/netload.c
@@ -72,6 +72,7 @@ void
 glibtop_get_netload_p (glibtop *server, glibtop_netload *buf,
                        const char *interface)
 {
+#ifndef __DragonFly__ /* TODO */
 	static struct ifaddrs *ifap, *ifa;
 
         glibtop_init_p (server, (1L << GLIBTOP_SYSDEPS_NETLOAD), 0);
@@ -197,4 +198,5 @@ glibtop_get_netload_p (glibtop *server,
 	}
 
 	freeifaddrs(ifap);
+#endif /* !__DragonFly__ */
 }
