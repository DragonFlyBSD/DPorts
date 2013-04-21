--- lib/cftoken.l.orig	2009-03-20 21:57:16.000000000 +0000
+++ lib/cftoken.l
@@ -53,7 +53,6 @@
 extern int yyget_lineno (void);
 extern FILE *yyget_in (void);
 extern FILE *yyget_out (void);
-extern int yyget_leng (void);
 extern char *yyget_text (void);
 extern void yyset_lineno (int);
 extern void yyset_in (FILE *);
@@ -76,9 +75,9 @@ static char rcf_linebuf[CF_LINEBUFSIZE];
 #define YYDEBUG 1
 #define DP \
 	if (cf_debug) { \
-		fprintf(CF_ERRDEV, "%s:%d:%d[%s] len=%d\n", \
+		fprintf(CF_ERRDEV, "%s:%d:%d[%s] len=%lu\n", \
 		    rcf_istk[rcf_istkp].path, rcf_istk[rcf_istkp].lineno, \
-		    yy_start, yytext, yyleng); \
+		    yy_start, yytext, (unsigned long) yyleng); \
 	}
 #else
 #define DP
