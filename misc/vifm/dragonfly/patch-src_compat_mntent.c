--- src/compat/mntent.c.orig	2016-01-17 14:02:23 UTC
+++ src/compat/mntent.c
@@ -131,7 +131,7 @@ flags2opts(int flags)
 	if(flags & MNT_SYNCHRONOUS) res = catopt(res, "sync");
 	if(flags & MNT_NOEXEC)      res = catopt(res, "noexec");
 	if(flags & MNT_NOSUID)      res = catopt(res, "nosuid");
-#ifndef __OpenBSD__
+#if !defined(__OpenBSD__) && !defined(__DragonFly__)
 	if(flags & MNT_UNION)       res = catopt(res, "union");
 #endif
 	if(flags & MNT_ASYNC)       res = catopt(res, "async");
