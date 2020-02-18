In file included from lexer.c:21:
lexer.l:224:5: error: expected identifier or '(' before '!' token
  */

--- grammar/lexer.l.orig	2020-01-13 07:34:24 UTC
+++ grammar/lexer.l
@@ -222,8 +222,7 @@ extern int yydebug;
 /* somehow, I need these prototype even though the headers are 
  * included. I guess that's some autotools magic I don't understand...
  */
-#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__) \
-	&& !defined(__DragonflyBSD__) && !defined(_AIX)
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__) && !defined(__DragonFly__) && !defined(_AIX)
 int fileno(FILE *stream);
 #endif
 
