--- Modules/posixmodule.c.intermediate	2020-11-13 18:43:51.000000000 +0000
+++ Modules/posixmodule.c
@@ -8702,7 +8702,7 @@ os_close_impl(PyObject *module, int fd)
  *    non-opened fd in the middle.
  * 2b. If fdwalk(3) isn't available, just do a plain close(2) loop.
  */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define USE_CLOSEFROM
 #endif /* __FreeBSD__ */
 
