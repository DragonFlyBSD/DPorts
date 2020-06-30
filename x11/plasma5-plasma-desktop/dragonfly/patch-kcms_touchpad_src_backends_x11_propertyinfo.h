--- kcms/touchpad/backends/x11/propertyinfo.h.orig	2019-05-07 10:04:31 UTC
+++ kcms/touchpad/backends/x11/propertyinfo.h
@@ -23,6 +23,11 @@
 #include <QX11Info>
 #include <X11/Xdefs.h>
 
+#ifdef __DragonFly__
+/* <sys/param.h>:#define nitems(x) NELEM(x) */
+#undef nitems
+#endif
+
 void XDeleter(void *p);
 
 struct PropertyInfo
