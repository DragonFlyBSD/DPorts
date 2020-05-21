--- Quota.xs.orig	2020-05-21 01:23:00 UTC
+++ Quota.xs
@@ -495,7 +495,11 @@ query(dev,uid=getuid(),kind=0)
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
@@ -705,7 +709,11 @@ setqlim(dev,uid,bs,bh,fs,fh,timelimflag=
               quota_close(qh);
             }
 #else /* not NETBSD_LIBQUOTA */
+#ifdef __DragonFly__
+	    struct ufs_dqblk dqblk;
+#else
 	    struct dqblk dqblk;
+#endif
             memset(&dqblk, 0, sizeof(dqblk));
 	    dqblk.QS_BSOFT = Q_MUL(bs);
 	    dqblk.QS_BHARD = Q_MUL(bh);
