--- xbmc/system.h.orig	2018-08-04 15:17:16.816637000 +0200
+++ xbmc/system.h	2018-08-04 15:17:45.277254000 +0200
@@ -124,7 +124,7 @@
  * Linux Specific
  *****************/
 
-#if defined(TARGET_LINUX) || defined(TARGET_FREEBSD)
+#if defined(TARGET_LINUX) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
 #if defined(HAVE_LIBAVAHI_COMMON) && defined(HAVE_LIBAVAHI_CLIENT)
 #define HAS_ZEROCONF
 #define HAS_AVAHI
@@ -145,7 +145,7 @@
 #ifndef HAVE_X11
 #if defined(TARGET_LINUX)
 #define HAS_LINUX_EVENTS
-#elif defined(TARGET_FREEBSD)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
 #define HAS_FREEBSD_EVENTS
 #endif
 #endif
