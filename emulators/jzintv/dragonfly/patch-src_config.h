--- src/config.h.orig
+++ src/config.h
@@ -331,7 +331,7 @@
 # define USE_SYS_IOCTL
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # define NO_INOUT
 # define USE_STRCASECMP
 # define DEFAULT_ROM_PATH ".:=../rom:/usr/local/share/jzintv/rom"
