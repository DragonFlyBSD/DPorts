--- src/basic/socket-util.c.orig	2021-09-18 10:21:08 UTC
+++ src/basic/socket-util.c
@@ -5,8 +5,15 @@
 #include "socket-util.h"
 #include "strv.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+#ifdef __DragonFly__
+#define ucred dfly_ucred
+#endif
 #include <sys/ucred.h>
+#ifdef __DragonFly__
+#undef ucred
+#endif
+
 #include <sys/un.h>
 #endif
 
@@ -33,7 +40,7 @@ int fd_inc_rcvbuf(int fd, size_t n) {
 }
 
 int getpeercred(int fd, struct ucred *ucred) {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         struct xucred cred;
         socklen_t len = sizeof cred;
         if (getsockopt(fd, 0, LOCAL_PEERCRED, &cred, &len) == -1) {
@@ -75,7 +82,7 @@ int getpeercred(int fd, struct ucred *uc
 }
 
 int getpeersec(int fd, char **ret) {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         return -EOPNOTSUPP;
 #else
         _cleanup_free_ char *s = NULL;
