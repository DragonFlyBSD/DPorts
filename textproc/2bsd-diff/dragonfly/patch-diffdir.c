--- diffdir.c.intermediate	2016-06-17 09:49:22 UTC
+++ diffdir.c
@@ -198,7 +198,11 @@ setupdir(cp)
 	}
 	while (rp = readdir(dirp)) {
 		ep = &dp[nitems++];
+#ifdef __DragonFly__
+		ep->d_reclen = _DIRENT_RECLEN(rp->d_namlen);
+#else
 		ep->d_reclen = rp->d_reclen;
+#endif
 		ep->d_namlen = rp->d_namlen;
 		ep->d_entry = 0;
 		ep->d_flags = 0;
