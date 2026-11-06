--- src/net.c.orig	2026-09-01 21:20:00 UTC
+++ src/net.c
@@ -154,7 +154,7 @@ int net_socket(const char name[], const char ifname[],
         goto fail;
     }
 
-#if defined(__APPLE__) || defined(__CYGWIN__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__CYGWIN__) || defined(__FreeBSD__) || defined(__DragonFly__)
     if (ifname) {
         log_error("%s: Bind to device not supported on Windows, MacOSX or FreeBSD.", name);
         goto fail;
