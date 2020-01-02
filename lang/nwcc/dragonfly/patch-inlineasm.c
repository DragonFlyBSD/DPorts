--- inlineasm.c.orig	2014-08-17 16:28:11 UTC
+++ inlineasm.c
@@ -1315,7 +1315,7 @@ parse_inline_asm(struct token **tok) {
 	int				err;
 	struct inline_asm_io		*iotmp;
 
-#ifndef __FreeBSD__ /* FreeBSD uses inline asm heavily in the headers ... */
+#if !defined(__FreeBSD__) && !defined(__DragonFly__) /* FreeBSD uses inline asm heavily in the headers ... */
 	if (!warned) {
 		warningfl(*tok, "nwcc inline assembly support is new, "
 			"incomplete and unproven");
