--- libtransmission/platform-quota.c.orig	2013-08-09 02:45:44.822416000 +0000
+++ libtransmission/platform-quota.c
@@ -20,6 +20,8 @@
  #include <sys/types.h> /* types needed by quota.h */
  #if defined(__FreeBSD__) || defined(__OpenBSD__)
   #include <ufs/ufs/quota.h> /* quotactl() */
+ #elif defined (__DragonFly__)
+  #include <vfs/ufs/quota.h> /* quotactl */
  #elif defined (__sun)
   #include <sys/fs/ufs_quota.h> /* quotactl */
  #else
@@ -198,12 +200,17 @@ getblkdev (const char * path)
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
@@ -235,7 +242,7 @@ getquota (const char * device)
           /* No quota enabled for this user */
           return -1;
         }
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
       spaceused = (int64_t) dq.dqb_curblocks >> 1;
 #elif defined(SYS_DARWIN)
       spaceused = (int64_t) dq.dqb_curbytes;
