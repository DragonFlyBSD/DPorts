Fix mislinkage og gledir(), char * vs string types

--- src/manip/all.h.orig	2010-12-26 19:07:31.000000000 +0200
+++ src/manip/all.h
@@ -143,7 +143,11 @@ typedef char (*(*TOKENS)[500]);
 typedef unsigned char uchar;
 typedef double dbl;
 char *unquote(char *s);
+#ifdef __DragonFly__
+string gledir(const char *filename);
+#else
 const char *gledir(const char *s);
+#endif
 int set_missing(int x, int y);
 double vcell(int x, int y);
 void var_find_rc(int *idx, int *var, int *nd, int c);
