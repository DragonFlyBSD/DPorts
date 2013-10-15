
$FreeBSD: editors/emacs21/files/patch-src_syntax.c 327953 2013-09-23 08:46:16Z ashish $

--- src/syntax.c.orig
+++ src/syntax.c
@@ -316,7 +316,7 @@
 /* Return the bytepos one character after BYTEPOS.
    We assume that BYTEPOS is not at the end of the buffer.  */
 
-INLINE int
+static INLINE int
 inc_bytepos (bytepos)
      int bytepos;
 {
@@ -330,7 +330,7 @@
 /* Return the bytepos one character before BYTEPOS.
    We assume that BYTEPOS is not at the start of the buffer.  */
 
-INLINE int
+static INLINE int
 dec_bytepos (bytepos)
      int bytepos;
 {
