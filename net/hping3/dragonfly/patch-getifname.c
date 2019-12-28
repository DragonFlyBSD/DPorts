--- getifname.c.orig	2003-10-22 10:41:00 UTC
+++ getifname.c
@@ -19,7 +19,7 @@
 #include <stdlib.h>
 
 #if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || \
-    defined(__bsdi__) || defined(__APPLE__)
+    defined(__bsdi__) || defined(__APPLE__) || defined(__DragonFly__)
 #include <ifaddrs.h>
 #include <net/route.h>
 #endif /* defined(__*BSD__) */
@@ -29,7 +29,7 @@
 
 #if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__) && \
     !defined(__linux__) && !defined(__sun__) && !defined(__bsdi__) && \
-    !defined(__APPLE__)
+    !defined(__APPLE__) && !defined(__DragonFly__)
 #error Sorry, interface code not implemented.
 #endif
 
@@ -174,7 +174,7 @@ int get_if_name(void)
 }
 
 #elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || \
-      defined(__bsdi__) || defined(__APPLE__)
+      defined(__bsdi__) || defined(__APPLE__) || defined(__DragonFly__)
 
 /* return interface informations :
    - from the specified (-I) interface
@@ -315,7 +315,8 @@ int get_if_name(void)
  * to the OS routing table. Derived from R.Stevens */
 int get_output_if(struct sockaddr_in *dest, struct sockaddr_in *ifip)
 {
-	int sock_rt, len, on=1;
+	int sock_rt, on=1;
+	socklen_t len;
 	struct sockaddr_in iface_out;
  
 	memset(&iface_out, 0, sizeof(iface_out));
