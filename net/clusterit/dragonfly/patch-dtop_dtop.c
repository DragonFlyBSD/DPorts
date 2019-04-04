--- dtop/dtop.c.orig	2008-02-27 19:29:39 UTC
+++ dtop/dtop.c
@@ -274,6 +274,11 @@ main(int argc, char *argv[])
     return(EXIT_SUCCESS);
 }
 
+#ifdef __DragonFly__
+/* XXX conflicting proto from <util.h> */
+#define dehumanize_number dehumanize_number_local
+#endif
+
 long long int
 dehumanize_number(char *num)
 {
