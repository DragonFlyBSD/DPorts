--- panels/common/gdm-languages.h.orig	2014-08-28 14:45:15.000000000 +0000
+++ panels/common/gdm-languages.h
@@ -24,6 +24,10 @@
 #ifndef __GDM_LANGUAGES_H
 #define __GDM_LANGUAGES_H
 
+#ifdef __DragonFly__
+#define	DTTOIF(dirtype) ((dirtype) << 12)
+#endif
+
 G_BEGIN_DECLS
 
 char *        gdm_get_language_from_name  (const char *name,
