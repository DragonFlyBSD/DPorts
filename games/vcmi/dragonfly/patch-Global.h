--- Global.h.orig
+++ Global.h
@@ -37,7 +37,7 @@
 #  if defined(__ANDROID__) || defined(ANDROID)
 #    define VCMI_ANDROID
 #  endif
-#elif defined(__FreeBSD_kernel__) || defined(__FreeBSD__)
+#elif defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #  define VCMI_UNIX
 #  define VCMI_XDG
 #  define VCMI_FREEBSD
