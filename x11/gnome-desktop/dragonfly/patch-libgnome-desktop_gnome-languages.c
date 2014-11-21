--- libgnome-desktop/gnome-languages.c.orig	2014-04-25 16:33:45 UTC
+++ libgnome-desktop/gnome-languages.c
@@ -46,6 +46,7 @@
 
 #define ISO_CODES_DATADIR ISO_CODES_PREFIX "/share/xml/iso-codes"
 #define ISO_CODES_LOCALESDIR ISO_CODES_PREFIX "/share/locale"
+#define DTTOIF(dirtype)	((dirtype) << 12)
 
 #include "default-input-sources.h"
 
