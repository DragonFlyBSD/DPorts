--- src/basic/socket-util.c.orig	2021-06-13 13:31:25.167926000 +0200
+++ src/basic/socket-util.c	2021-06-13 13:34:51.613342000 +0200
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
 
@@ -33,7 +40,7 @@
 }
 
 int getpeercred(int fd, struct ucred *ucred) {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         struct xucred cred;
         socklen_t len = sizeof cred;
         if (getsockopt(fd, 0, LOCAL_PEERCRED, &cred, &len) == -1) {
@@ -41,7 +48,7 @@
         }
 
         struct ucred u = {
-#if __FreeBSD_version >= 1300030 || (__FreeBSD_version >= 1202506 && __FreeBSD_version < 1300000)
+#if defined(__FreeBSD__) && ( __FreeBSD_version >= 1300030 || (__FreeBSD_version >= 1202506 && __FreeBSD_version < 1300000) )
                 .pid = cred.cr_pid,
 #else
                 .pid = -1,
@@ -79,7 +86,7 @@
 }
 
 int getpeersec(int fd, char **ret) {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         return -EOPNOTSUPP;
 #else
         _cleanup_free_ char *s = NULL;
