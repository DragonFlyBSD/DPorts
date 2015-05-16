--- compat/unix/osname.c.orig	2013-05-16 20:32:12 UTC
+++ compat/unix/osname.c
@@ -31,7 +31,7 @@
 #include <string.h>
 #include <sys/utsname.h>
 
-extern char *progname;
+char *progname;
 
 int compat_osname( char *buffer, size_t length )
 {
