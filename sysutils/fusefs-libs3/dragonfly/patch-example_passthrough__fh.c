--- example/passthrough_fh.c.orig	2019-04-16 18:46:20 UTC
+++ example/passthrough_fh.c
@@ -151,7 +151,7 @@ static int xmp_readdir(const char *path,
 
 	(void) path;
 	if (offset != d->offset) {
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 		seekdir(d->dp, offset);
 #else
 		/* Subtract the one that we add when calling
@@ -187,7 +187,7 @@ static int xmp_readdir(const char *path,
 			st.st_mode = d->entry->d_type << 12;
 		}
 		nextoff = telldir(d->dp);
-#ifdef __FreeBSD__		
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		/* Under FreeBSD, telldir() may return 0 the first time
 		   it is called. But for libfuse, an offset of zero
 		   means that offsets are not supported, so we shift
