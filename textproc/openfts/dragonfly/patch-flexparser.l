Package version should be fine
--- OpenFTS/flexparser.l.intermediate	2010-05-23 01:15:15.558693826 +0900
+++ OpenFTS/flexparser.l
@@ -15,7 +15,7 @@
 
 /* redefine macro for read limited length */
 #define YY_INPUT(buf,result,max_size) \
-	if ( yy_current_buffer->yy_is_interactive ) { \
+	if ( YY_CURRENT_BUFFER_LVALUE->yy_is_interactive ) { \
                 int c = '*', n; \
                 for ( n = 0; n < max_size && \
                              (c = getc( fts_yyin )) != EOF && c != '\n'; ++n ) \
