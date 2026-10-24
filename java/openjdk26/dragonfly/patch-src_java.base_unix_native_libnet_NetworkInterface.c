--- src/java.base/unix/native/libnet/NetworkInterface.c.orig
+++ src/java.base/unix/native/libnet/NetworkInterface.c
@@ -44,7 +44,7 @@
 #endif
 
 #if defined(_BSDONLY_SOURCE)
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <net/ethernet.h>
 #include <net/if_var.h>
 #elif defined(__OpenBSD__)
@@ -1793,7 +1793,7 @@
  * Try to get the interface index.
  */
 static int getIndex(int sock, const char *name) {
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) || defined(__DragonFly__)
     int index = if_nametoindex(name);
     return (index == 0) ? -1 : index;
 #else
