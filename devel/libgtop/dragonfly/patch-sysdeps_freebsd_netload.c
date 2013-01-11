TODO: Implement for DragonFly

--- sysdeps/freebsd/netload.c.orig	2011-03-14 23:08:03.000000000 +0100
+++ sysdeps/freebsd/netload.c	2013-01-11 17:19:14.000000000 +0100
@@ -91,6 +91,7 @@
 glibtop_get_netload_p (glibtop *server, glibtop_netload *buf,
                        const char *interface)
 {
+#ifndef __DragonFly__ /* TODO */
         struct ifnet ifnet;
         u_long ifnetaddr, ifnetfound;
         struct sockaddr *sa = NULL;
@@ -251,4 +252,5 @@
                 }
                 return;
         }
+#endif /* !__DragonFly__ */
 }
