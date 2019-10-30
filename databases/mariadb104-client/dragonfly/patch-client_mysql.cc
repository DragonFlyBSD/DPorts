--- client/mysql.cc.orig	2015-12-16 16:05:44 UTC
+++ client/mysql.cc
@@ -60,7 +60,7 @@ static char *server_version= NULL;
 #include "sql_string.h"
 
 extern "C" {
-#if defined(HAVE_CURSES_H) && defined(HAVE_TERM_H)
+#if 1
 #include <curses.h>
 #include <term.h>
 #else
