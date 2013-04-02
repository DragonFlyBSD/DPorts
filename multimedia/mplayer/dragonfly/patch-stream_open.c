--- stream/open.c.orig	2012-10-18 12:17:58.000000000 +0000
+++ stream/open.c
@@ -39,6 +39,7 @@
 
 /// We keep these 2 for the gui atm, but they will be removed.
 char* cdrom_device=NULL;
+int dvd_angle=1;
 int dvd_chapter=1;
 int dvd_last_chapter=0;
 char* dvd_device=NULL;
