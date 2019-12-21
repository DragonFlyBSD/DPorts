--- Modules/posixmodule.c.intermediate	2019-12-21 11:34:51.000000000 +0000
+++ Modules/posixmodule.c
@@ -8461,7 +8461,7 @@ os_closerange_impl(PyObject *module, int
     fdwalk(_fdwalk_close_func, lohi);
 #else
     fd_low = Py_MAX(fd_low, 0);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     if (fd_high >= sysconf(_SC_OPEN_MAX)) {
         closefrom(fd_low);
     } else
