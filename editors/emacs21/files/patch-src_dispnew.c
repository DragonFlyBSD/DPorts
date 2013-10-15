
$FreeBSD: editors/emacs21/files/patch-src_dispnew.c 327953 2013-09-23 08:46:16Z ashish $

--- src/dispnew.c.orig
+++ src/dispnew.c
@@ -1256,7 +1256,7 @@
 /* Copy glyph row structure FROM to glyph row structure TO, except
    that glyph pointers in the structures are left unchanged.  */
 
-INLINE void
+static INLINE void
 copy_row_except_pointers (to, from)
      struct glyph_row *to, *from;
 {
