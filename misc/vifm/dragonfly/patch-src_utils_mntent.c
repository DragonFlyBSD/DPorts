--- src/utils/mntent.c.orig	2015-07-09 16:00:42 UTC
+++ src/utils/mntent.c
@@ -125,7 +125,7 @@ flags2opts(int flags)
 	if(flags & MNT_SYNCHRONOUS) res = catopt(res, "sync");
 	if(flags & MNT_NOEXEC)      res = catopt(res, "noexec");
 	if(flags & MNT_NOSUID)      res = catopt(res, "nosuid");
-#ifndef __OpenBSD__
+#if !defined(__OpenBSD__) && !defined(__DragonFly__)
 	if(flags & MNT_UNION)       res = catopt(res, "union");
 #endif
 	if(flags & MNT_ASYNC)       res = catopt(res, "async");
