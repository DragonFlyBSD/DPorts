--- thirdparty/3dxware_sdk/inc/navlib/navlib_types.h.orig
+++ thirdparty/3dxware_sdk/inc/navlib/navlib_types.h
@@ -27,6 +27,10 @@
 #include <navlib/navlib_defines.h>
 
 #include <errno.h>
+// DragonFly has no ENODATA; FreeBSD gets libc++'s fallback value.
+#ifndef ENODATA
+#define ENODATA 9919
+#endif
 #if (defined(_MSC_VER) && _MSC_VER < 1600)
 typedef __int8 int8_t;
 typedef unsigned __int32 uint32_t;
