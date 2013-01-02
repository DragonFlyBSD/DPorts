--- src/history.c.orig	2011-12-28 23:00:37.000000000 +0100
+++ src/history.c	2013-01-01 18:11:05.196003000 +0100
@@ -340,6 +340,8 @@
 
 #elif defined(HAVE_LIBREADLINE) || defined(HAVE_LIBEDITLINE)
 
+#include <readline/history.h>
+
 /* Save history to file, or write to stdout or pipe.
  * For pipes, only "|" works, pipes starting with ">" get a strange 
  * filename like in the non-readline version.
