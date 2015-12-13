--- Quota.xs.orig	2013-08-15 07:56:35.000000000 +0300
+++ Quota.xs
@@ -454,7 +454,11 @@ query(dev,uid=getuid(),kind=0)
                 quota_close(qh);
               }
 #else /* not NETBSD_LIBQUOTA */
+#ifdef __DragonFly__
+	      struct ufs_dqblk dqblk;
+#else
 	      struct dqblk dqblk;
+#endif
 #ifdef USE_IOCTL
 	      struct quotactl qp;
 	      int fd = -1;
@@ -539,8 +543,12 @@ setqlim(dev,uid,bs,bh,fs,fh,timelimflag=
 	CODE:
 	{
 #ifndef NETBSD_LIBQUOTA
+#ifdef __DragonFly__
+	  struct ufs_dqblk dqblk;
+#else
 	  struct dqblk dqblk;
 #endif
+#endif
 #ifdef USE_IOCTL
 	  struct quotactl qp;
 	  int fd;
