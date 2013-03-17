--- icalscanner.lex.orig	2003-01-28 17:45:21.000000000 +0000
+++ icalscanner.lex
@@ -32,13 +32,6 @@
  */
 
 #include "icalroutines.h"
-
-void
-ical_usebuf(const char *buf, size_t size)
-{
-	BEGIN(INITIAL);
-	yy_scan_bytes(buf, size);
-}
 %}
 
 
@@ -68,3 +61,12 @@ IDCHAR		[a-zA-Z0-9]|"-"
 {LF}				BEGIN(INITIAL); return ICALTOK_LF;
 .				return ICALTOK_JUNK;
 <<EOF>>				return ICALTOK_EOF;
+
+%%
+
+void
+ical_usebuf(const char *buf, size_t size)
+{
+	BEGIN(INITIAL);
+	yy_scan_bytes(buf, size);
+}
