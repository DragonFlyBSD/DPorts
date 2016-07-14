--- mod/html/mod_html.c.orig	2005-01-02 22:10:26.000000000 +0200
+++ mod/html/mod_html.c
@@ -24,6 +24,7 @@
 // standard
 #include <cctype>
 #include <cstring>
+#include <cstdlib> // for exit()
 #include <utility>                              /* for pair<> */
 #include <vector>
 
