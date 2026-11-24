--- src/thirdparty/quickjs-ng/quickjs-amalgam.c.orig
+++ src/thirdparty/quickjs-ng/quickjs-amalgam.c
@@ -111,7 +111,7 @@
 #include <malloc/malloc.h>
 #elif defined(__linux__) || defined(__ANDROID__) || defined(__CYGWIN__) || defined(__GLIBC__)
 #include <malloc.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <malloc_np.h>
 #elif defined(_WIN32)
 #include <winsock2.h>
@@ -679,7 +679,7 @@
     return malloc_size(ptr);
 #elif defined(_WIN32)
     return _msize((void *)ptr);
-#elif defined(__linux__) || defined(__ANDROID__) || defined(__CYGWIN__) || defined(__FreeBSD__) || defined(__GLIBC__)
+#elif defined(__linux__) || defined(__ANDROID__) || defined(__CYGWIN__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__GLIBC__)
     return malloc_usable_size((void *)ptr);
 #else
     return 0;
@@ -78491,7 +78491,7 @@
 extern char **environ;
 #endif
 
-#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__)
 typedef sig_t sighandler_t;
 extern char **environ;
 #endif
@@ -82770,7 +82770,7 @@
 #define OS_PLATFORM "openbsd"
 #elif defined(__NetBSD__)
 #define OS_PLATFORM "netbsd"
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #define OS_PLATFORM "freebsd"
 #elif defined(__wasi__)
 #define OS_PLATFORM "wasi"
