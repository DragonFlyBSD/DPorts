--- lib/helper.c.orig	2019-04-16 18:46:20 UTC
+++ lib/helper.c
@@ -44,7 +44,7 @@ static const struct fuse_opt fuse_helper
 	FUSE_HELPER_OPT("-s",		singlethread),
 	FUSE_HELPER_OPT("fsname=",	nodefault_subtype),
 	FUSE_OPT_KEY("fsname=",		FUSE_OPT_KEY_KEEP),
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 	FUSE_HELPER_OPT("subtype=",	nodefault_subtype),
 	FUSE_OPT_KEY("subtype=",	FUSE_OPT_KEY_KEEP),
 #endif
@@ -189,7 +189,7 @@ static int add_default_subtype(const cha
 		fprintf(stderr, "fuse: memory allocation failed\n");
 		return -1;
 	}
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	sprintf(subtype_opt, "-ofsname=%s", basename);
 #else
 	sprintf(subtype_opt, "-osubtype=%s", basename);
