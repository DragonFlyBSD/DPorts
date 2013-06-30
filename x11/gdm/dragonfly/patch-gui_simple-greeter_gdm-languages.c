--- gui/simple-greeter/gdm-languages.c.intermediate	2013-06-30 06:47:37.122400000 +0000
+++ gui/simple-greeter/gdm-languages.c
@@ -45,6 +45,10 @@
 #endif
 #include "locarchive.h"
 
+#ifdef __DragonFly__
+#define	DTTOIF(dirtype) ((dirtype) << 12)
+#endif
+
 #define ALIASES_FILE DATADIR "/gdm/locale.alias"
 #define ARCHIVE_FILE LIBLOCALEDIR "/locale-archive"
 #define ISO_CODES_DATADIR ISO_CODES_PREFIX "/share/xml/iso-codes"
