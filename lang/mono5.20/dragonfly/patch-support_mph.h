--- support/mph.h.orig	2019-07-16 18:16:12 UTC
+++ support/mph.h
@@ -79,7 +79,7 @@ int fsetpos(FILE*, const fpos_t*);
 
 #endif
 
-#if __APPLE__ || __BSD__ || __FreeBSD__ || __OpenBSD__
+#if __APPLE__ || __BSD__ || __FreeBSD__ || __OpenBSD__ || __DragonFly__ || __NetBSD__
 #define MPH_ON_BSD
 #endif
 
