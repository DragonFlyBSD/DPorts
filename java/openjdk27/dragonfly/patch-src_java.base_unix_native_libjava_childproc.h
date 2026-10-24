--- src/java.base/unix/native/libjava/childproc.h.orig
+++ src/java.base/unix/native/libjava/childproc.h
@@ -138,7 +138,7 @@
 bool fdIsCloexec(int fd);
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #define HAVE_PIPE2
 #else
 // Neither MacOS nor AIX support pipe2, unfortunately
