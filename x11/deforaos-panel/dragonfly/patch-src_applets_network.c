--- src/applets/network.c.orig	2014-10-23 17:34:42 UTC
+++ src/applets/network.c
@@ -32,6 +32,7 @@
 #include "Panel.h"
 #define _(string) gettext(string)
 
+#undef SIOCGIFDATA
 
 /* Network */
 /* private */
