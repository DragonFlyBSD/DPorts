--- stream/open.c.orig	2011-03-21 20:21:32.000000000 +0100
+++ stream/open.c	2013-01-16 02:02:21.184937000 +0100
@@ -43,6 +43,7 @@
 int dvd_last_chapter=0;
 char* dvd_device=NULL;
 int dvd_title=0;
+int dvd_angle=1;
 char *bluray_device=NULL;
 
 // Open a new stream  (stdin/file/vcd/url)
