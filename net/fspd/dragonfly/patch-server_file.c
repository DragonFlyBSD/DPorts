Just to unbreak compile.

--- server/file.c.orig	2019-08-16 13:07:22 UTC
+++ server/file.c
@@ -71,7 +71,11 @@ static unsigned int fpcache_entry_profil
     const FPCACHE *f=entry;
 
     if(f->fp)
+#ifdef __DragonFly__
+	return sizeof(struct __FILE_public);
+#else
 	return sizeof(FILE);
+#endif
     else
 	return 0;
 }
