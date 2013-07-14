--- libtransmission/platform.c.orig	2013-06-26 02:35:25.647458000 +0000
+++ libtransmission/platform.c
@@ -14,6 +14,8 @@
  #include <sys/types.h> /* types needed by quota.h */
  #ifdef __FreeBSD__
   #include <ufs/ufs/quota.h> /* quotactl() */
+ #elif defined (__DragonFly__)
+  #include <vfs/ufs/quota.h> /* quotactl */
  #elif defined (__sun)
   #include <sys/fs/ufs_quota.h> /* quotactl */
  #else
@@ -746,12 +748,16 @@ getblkdev (const char * path)
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
 
-#if defined(__FreeBSD__) || defined(SYS_DARWIN)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(SYS_DARWIN)
   if (quotactl(device, QCMD(Q_GETQUOTA, USRQUOTA), getuid(), (caddr_t) &dq) == 0)
     {
 #elif defined(__sun)
@@ -783,7 +789,7 @@ getquota (const char * device)
           /* No quota enabled for this user */
           return -1;
         }
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
       spaceused = (int64_t) dq.dqb_curblocks >> 1;
 #elif defined(SYS_DARWIN)
       spaceused = (int64_t) dq.dqb_curbytes;
