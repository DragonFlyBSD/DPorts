--- uuid.c.orig	2021-02-28 13:22:38 UTC
+++ uuid.c
@@ -47,7 +47,7 @@ osdep_uuidgen(mkimg_uuid_t *uuid)
 }
 #endif	/* __APPLE__ */
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/uuid.h>
 
 static void
