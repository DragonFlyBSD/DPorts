--- mapchan.c.orig	2013-06-03 09:15:34.000000000 +0000
+++ mapchan.c
@@ -15,7 +15,7 @@
 #include <stdlib.h>
 #include <signal.h>
 #include <libgen.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <libutil.h>
 #include <sys/ioctl.h>
 #else
@@ -194,7 +194,7 @@ int init_utf_tables(char *codeset) {
   char buf[1];
   char obuf[MAXBYTES];
   char *pi, *po;
-  int ii, io;
+  size_t ii, io;
   struct bytecell *current_table;
 
   if (codeset == NULL) return(0);
