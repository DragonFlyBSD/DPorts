--- update.c.orig	2012-07-05 18:54:03 UTC
+++ update.c
@@ -281,7 +281,11 @@
 			if (!strcmp(dp->d_name, ".") ||
 			    !strcmp(dp->d_name, "..") ||
 			    dp->d_fileno == 0) {
+#if defined(__DragonFly__)
+				cp = (char *)_DIRENT_NEXT(dp);
+#else
 				cp += dp->d_reclen;
+#endif
 				continue;
 			}
 
@@ -291,7 +295,11 @@
 			if (isempty == 0)
 				break;
 
+#if defined(__DragonFly__)
+				cp = (char *)_DIRENT_NEXT(dp);
+#else
 			cp += dp->d_reclen;
+#endif
 		}
 	}
 
