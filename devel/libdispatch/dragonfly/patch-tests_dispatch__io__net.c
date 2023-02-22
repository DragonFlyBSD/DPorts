--- tests/dispatch_io_net.c.orig	2021-09-17 04:54:52 UTC
+++ tests/dispatch_io_net.c
@@ -55,7 +55,8 @@ extern char **environ;
 #endif
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(_WIN32) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(_WIN32) || defined(__OpenBSD__) || \
+	defined(__DragonFly__)
 #define _NSGetExecutablePath(ef,bs) (*(bs)=(size_t)snprintf(ef,*(bs),"%s",argv[0]),0)
 #endif
 
