--- src-common/yglue.h.orig	2010-09-13 04:15:28 UTC
+++ src-common/yglue.h
@@ -51,7 +51,7 @@ typedef union {
 int yyget_lineno(void);
 FILE *yyget_in  (void);
 FILE *yyget_out  (void);
-size_t yyget_leng  (void);
+int yyget_leng  (void);
 char *yyget_text  (void);
 void yyset_lineno (int  line_number );
 void yyset_in (FILE *  in_str );
