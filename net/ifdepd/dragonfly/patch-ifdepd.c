--- ifdepd.c.orig	2011-04-12 13:24:48.000000000 +0000
+++ ifdepd.c
@@ -188,7 +188,7 @@ void int_down(int_name if_name) {
   }
 }
 
-inline void cleanup() {
+static inline void cleanup() {
   if (s_opt != NULL)
     free(s_opt);
   if (d_opt != NULL)
