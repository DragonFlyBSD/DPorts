--- popper/pop_rpop.c.orig	2011-05-30 19:13:40 UTC
+++ popper/pop_rpop.c
@@ -42,6 +42,7 @@
 #include <sys/stat.h>
 #include <pwd.h>
 #include <string.h>
+#include <unistd.h> /* for iruserok_sa() */
 
 #if HAVE_STRINGS_H
 #  include <strings.h>
