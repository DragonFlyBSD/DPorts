
$FreeBSD: net/vncreflector/files/patch-main.c 300897 2012-07-14 14:29:18Z beat $

--- main.c.orig
+++ main.c
@@ -464,7 +464,7 @@
 
 static int init_screen_info(void)
 {
-  union _LITTLE_ENDIAN {
+  union {
     CARD32 value32;
     CARD8 test;
   } little_endian;
