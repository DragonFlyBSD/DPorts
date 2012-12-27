
$FreeBSD: ports/graphics/libaux/files/patch-font.c,v 1.2 2012/11/17 05:58:12 svnexp Exp $

--- font.c	2001/03/14 10:51:36	1.1
+++ font.c	2001/03/14 10:51:48
@@ -32,7 +32,7 @@
 void auxCreateFont(void)
 {
     bitmapBase = glGenLists(256);
-    if (auxCreateBitmapFont(bitmapBase) == GL_FALSE) {
+    if (tkCreateBitmapFont(bitmapBase) == GL_FALSE) {
         auxQuit();
     }
 }
