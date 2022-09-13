--- client/mysql.cc.orig	2020-06-23 15:10:16 UTC
+++ client/mysql.cc
@@ -61,7 +61,7 @@ static char *server_version= NULL;
 #include "client_metadata.h"
 
 extern "C" {
-#if defined(HAVE_CURSES_H) && defined(HAVE_TERM_H)
+#if 1
 #include <curses.h>
 #include <term.h>
 #else
