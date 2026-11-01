--- src/openvas.c.orig
+++ src/openvas.c
@@ -523,7 +523,7 @@
  * @param argv Argument vector.
  */
 int
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 openvas (int argc, char *argv[])
  
 {
