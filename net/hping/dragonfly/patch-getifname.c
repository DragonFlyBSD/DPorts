--- getifname.c.orig	2004-05-03 08:55:53 UTC
+++ getifname.c
@@ -17,7 +17,7 @@
 #include <unistd.h>		/* close */
 
 #if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || \
-    defined(__bsdi__) || defined(__APPLE__)
+    defined(__bsdi__) || defined(__APPLE__) || defined(__DragonFly__)
 #include <stdlib.h>
 #include <ifaddrs.h>
 #include <net/route.h>
@@ -28,7 +28,7 @@
 
 #if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__) && \
     !defined(__linux__) && !defined(__sun__) && !defined(__bsdi__) && \
-    !defined(__APPLE__)
+    !defined(__APPLE__) && !defined(__DragonFly__)
 #error Sorry, interface code not implemented.
 #endif
 
@@ -175,7 +175,7 @@
 }
 
 #elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || \
-      defined(__bsdi__) || defined(__APPLE__)
+      defined(__bsdi__) || defined(__APPLE__) || defined(__DragonFly__)
 
 /* return interface informations :
    - from the specified (-I) interface
@@ -317,7 +317,8 @@
  * to the OS routing table. Derived from R.Stevens */
 int get_output_if(struct sockaddr_in *dest, struct sockaddr_in *ifip)
 {
-	int sock_rt, len, on=1;
+	int sock_rt, on=1;
+	socklen_t len;
 	struct sockaddr_in iface_out;
  
 	memset(&iface_out, 0, sizeof(iface_out));
