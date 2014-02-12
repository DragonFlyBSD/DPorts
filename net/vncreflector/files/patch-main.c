
$FreeBSD: head/net/vncreflector/files/patch-main.c 340725 2014-01-22 17:40:44Z mat $

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
