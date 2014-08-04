--- libtransmission/platform-quota.c.orig	2014-07-01 17:08:59.714910000 +0000
+++ libtransmission/platform-quota.c
@@ -17,6 +17,8 @@
  #include <sys/types.h> /* types needed by quota.h */
  #if defined(__FreeBSD__) || defined(__OpenBSD__)
   #include <ufs/ufs/quota.h> /* quotactl() */
+ #elif defined (__DragonFly__)
+  #include <vfs/ufs/quota.h> /* quotactl() */
  #elif defined (__NetBSD__)
   #include <sys/param.h>
   #ifndef statfs
@@ -241,12 +243,17 @@ getquota (const char * device)
 static int64_t
 getquota (const char * device)
 {
+#ifdef __DragonFly__
+  struct ufs_dqblk dq;
+#else
   struct dqblk dq;
+#endif
   int64_t limit;
   int64_t freespace;
   int64_t spaceused;
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(SYS_DARWIN)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(SYS_DARWIN) \
+ || defined(__DragonFly__)
   if (quotactl(device, QCMD(Q_GETQUOTA, USRQUOTA), getuid(), (caddr_t) &dq) == 0)
     {
 #elif defined(__sun)
@@ -278,7 +285,7 @@ getquota (const char * device)
           /* No quota enabled for this user */
           return -1;
         }
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
       spaceused = (int64_t) dq.dqb_curblocks >> 1;
 #elif defined(SYS_DARWIN)
       spaceused = (int64_t) dq.dqb_curbytes;
