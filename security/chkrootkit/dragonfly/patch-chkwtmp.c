--- chkwtmp.c.orig
+++ chkwtmp.c
@@ -19,7 +19,7 @@
    Nelson Murilo, nmurilo@gmail.com
 */
 
-#if __FreeBSD__ > 9 
+#if __FreeBSD__ > 9 || defined(__DragonFly__)
 int main () { return 0; } 
 #else
 #include <stdio.h>
