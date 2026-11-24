--- pr/src/pthreads/ptio.c.orig
+++ pr/src/pthreads/ptio.c
@@ -178,7 +178,7 @@
     defined(HPUX10_30) || defined(HPUX11) || defined(LINUX) ||    \
     defined(__GNU__) || defined(__GLIBC__) || defined(FREEBSD) || \
     defined(NETBSD) || defined(OPENBSD) || defined(NTO) ||        \
-    defined(DARWIN) || defined(REDOX) || defined(RISCOS)
+    defined(DARWIN) || defined(REDOX) || defined(RISCOS) || defined(__DragonFly__)
 #define _PRSelectFdSetArg_t fd_set*
 #else
 #error "Cannot determine architecture"
@@ -3240,7 +3240,7 @@
 #if defined(SOLARIS) || defined(LINUX) || defined(__GNU__) || \
     defined(__GLIBC__) || defined(AIX) || defined(FREEBSD) || \
     defined(NETBSD) || defined(OPENBSD) || defined(NTO) ||    \
-    defined(DARWIN) || defined(REDOX) || defined(RISCOS)
+    defined(DARWIN) || defined(REDOX) || defined(RISCOS) || defined(__DragonFly__)
 #define _PR_FCNTL_FLAGS O_NONBLOCK
 #else
 #error "Can't determine architecture"
