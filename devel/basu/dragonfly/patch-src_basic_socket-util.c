--- src/basic/socket-util.c.orig	2021-01-06 13:56:51 UTC
+++ src/basic/socket-util.c
@@ -5,8 +5,14 @@
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
 #include <sys/un.h>
 #endif
 
@@ -33,7 +39,7 @@ int fd_inc_rcvbuf(int fd, size_t n) {
 }
 
 int getpeercred(int fd, struct ucred *ucred) {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         struct xucred cred;
         socklen_t len = sizeof cred;
         if (getsockopt(fd, 0, LOCAL_PEERCRED, &cred, &len) == -1) {
@@ -41,7 +47,7 @@ int getpeercred(int fd, struct ucred *uc
         }
 
         struct ucred u = {
-#if __FreeBSD_version >= 1300030
+#if defined(__FreeBSD__) && __FreeBSD_version >= 1300030
                 .pid = cred.cr_pid,
 #else
                 .pid = -1,
@@ -79,7 +85,7 @@ int getpeercred(int fd, struct ucred *uc
 }
 
 int getpeersec(int fd, char **ret) {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         return -EOPNOTSUPP;
 #else
         _cleanup_free_ char *s = NULL;
