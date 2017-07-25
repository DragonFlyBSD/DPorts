--- src/sb_util.h.orig	2017-07-24 15:19:31.000000000 +0300
+++ src/sb_util.h
@@ -52,6 +52,8 @@
 # define DLEXT ".dylib"
 #elif defined(__sun)
 # define DLEXT ".so"
+#elif defined(__DragonFly__)
+# define DLEXT ".so"
 #else
 # error Cannot detect the dynamic library suffix for this platform
 #endif
