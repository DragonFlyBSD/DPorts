--- src/main/native/unix_jni_bsd.cc.orig	Tue Jan  1 00:00:00 1980
+++ src/main/native/unix_jni_bsd.cc	Tue Mar
@@ -15,7 +15,7 @@
 #if defined(__FreeBSD__)
 # define HAVE_EXTATTR
 # define HAVE_SYSCTLBYNAME
-#elif defined(__OpenBSD__)
+#elif defined(__OpenBSD__) || defined(__DragonFly__)
 // No sys/extattr.h or sysctlbyname on this platform.
 #else
 # error This BSD is not supported
