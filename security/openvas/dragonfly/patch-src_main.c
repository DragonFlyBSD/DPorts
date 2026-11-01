--- src/main.c.orig
+++ src/main.c
@@ -21,7 +21,7 @@
  * @return EXIT_SUCCESS on success, EXIT_FAILURE on failure.
  */
 int
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 main (int argc, char **argv)
 {
   return openvas (argc, argv);
