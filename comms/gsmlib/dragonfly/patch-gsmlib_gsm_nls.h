--- gsmlib/gsm_nls.h.orig	2002-05-14 21:38:12.000000000 +0200
+++ gsmlib/gsm_nls.h
@@ -20,6 +20,8 @@
 #include <gsm_config.h>
 #endif
 
+#include <cstring>
+
 #ifdef ENABLE_NLS
 
 #ifdef HAVE_LIBINTL_H
