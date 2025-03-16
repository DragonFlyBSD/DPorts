--- src/readelf.c.orig	Mon Apr 25 20:56:39 2022
+++ src/readelf.c	Mon Mar
@@ -8504,7 +8504,7 @@ print_debug_line_section (Dwfl_Module *dwflmod, Ebl *e
       uint_fast8_t default_is_stmt = *linep++;
 
       /* Now the line base.  */
-      int_fast8_t line_base = *linep++;
+      int_fast8_t line_base = (const char)*linep++;
 
       /* And the line range.  */
       uint_fast8_t line_range = *linep++;
