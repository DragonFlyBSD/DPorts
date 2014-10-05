--- file.c.orig	2010-11-04 17:29:35 UTC
+++ file.c
@@ -482,14 +482,22 @@
 			    !strcmp(dp->d_name, "..") ||
 			    !strcmp(dp->d_name, CVS_PATH_CVSDIR) ||
 			    dp->d_fileno == 0) {
+#if defined(__DragonFly__)
+				cp = (char *)_DIRENT_NEXT(dp);
+#else
 				cp += dp->d_reclen;
+#endif
 				continue;
 			}
 
 			if (cvs_file_chkign(dp->d_name) &&
 			    cvs_cmdop != CVS_OP_RLOG &&
 			    cvs_cmdop != CVS_OP_RTAG) {
+#if defined(__DragonFly__)
+				cp = (char *)_DIRENT_NEXT(dp);
+#else
 				cp += dp->d_reclen;
+#endif
 				continue;
 			}
 
@@ -536,7 +544,11 @@
 					cvs_log(LP_NOTICE, "ignoring `%s'",
 					    dp->d_name);
 				}
+#if defined(__DragonFly__)
+				cp = (char *)_DIRENT_NEXT(dp);
+#else
 				cp += dp->d_reclen;
+#endif
 				continue;
 			}
 
@@ -553,7 +565,11 @@
 				    type);
 			}
 
+#if defined(__DragonFly__)
+				cp = (char *)_DIRENT_NEXT(dp);
+#else
 			cp += dp->d_reclen;
+#endif
 		}
 	}
 
