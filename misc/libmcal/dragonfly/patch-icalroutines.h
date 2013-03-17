--- icalroutines.h.orig	2003-01-28 17:45:21.000000000 +0000
+++ icalroutines.h
@@ -49,7 +49,7 @@ typedef enum {
 
 /* ICAL parser. */
 extern char	*ical_yytext;
-extern int	ical_yyleng;
+extern size_t	ical_yyleng;
 int		ical_yylex(void);
 void		ical_usebuf(const char *buf, size_t size);
 void		ical_preprocess(char *buf, size_t *size);
