--- src/virtual.c.orig
+++ src/virtual.c
@@ -277,7 +277,9 @@
 #ifdef HAVE_D_OFF
     ent->d_off = n * AVFS_DIR_RECLEN; 
 #endif
+#ifndef __DragonFly__
     ent->d_reclen = AVFS_DIR_RECLEN;
+#endif
 #ifdef HAVE_D_TYPE
     ent->d_type = avent->type;
 #endif
