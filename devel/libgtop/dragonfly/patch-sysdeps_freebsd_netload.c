--- sysdeps/freebsd/netload.c.orig	2014-11-21 12:23:34 UTC
+++ sysdeps/freebsd/netload.c
@@ -67,6 +67,7 @@ void
 glibtop_get_netload_p (glibtop *server, glibtop_netload *buf,
                        const char *interface)
 {
+#ifndef __DragonFly__ /* TODO */
 	struct ifaddrs *ifap, *ifa;
 
         glibtop_init_p (server, (1L << GLIBTOP_SYSDEPS_NETLOAD), 0);
@@ -192,4 +193,5 @@ glibtop_get_netload_p (glibtop *server,
 	}
 
 	freeifaddrs(ifap);
+#endif /* !__DragonFly__ */
 }
