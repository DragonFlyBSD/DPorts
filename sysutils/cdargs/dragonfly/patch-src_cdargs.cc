--- src/cdargs.cc.orig	2006-02-26 19:06:47.000000000 +0200
+++ src/cdargs.cc
@@ -56,6 +56,7 @@ using namespace std;
 # include <unistd.h>
 # include <signal.h>
 # include <string.h>
+# include <limits.h> // for PATH_MAX
 
 //# if defined(USE_NCURSES) && !defined(RENAMED_NCURSES)
 # if defined(HAVE_NCURSES_H)
