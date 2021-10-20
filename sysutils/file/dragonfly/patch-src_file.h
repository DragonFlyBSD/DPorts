--- src/file.h.orig	2015-01-01 17:07:34 UTC
+++ src/file.h
@@ -491,6 +491,7 @@ protected int file_os2_apptype(struct ma
 #include <locale.h>
 #endif
 #if defined(HAVE_XLOCALE_H)
+#include <wchar.h>
 #include <xlocale.h>
 #endif
 
