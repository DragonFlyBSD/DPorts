--- src/ci_string.h.orig	2001-05-16 14:39:31 UTC
+++ src/ci_string.h
@@ -8,6 +8,7 @@
 
 #include <string>
 #include <ctype.h>
+#include <strings.h>
 
 struct ci_char_traits : public std::char_traits<char>
 {
