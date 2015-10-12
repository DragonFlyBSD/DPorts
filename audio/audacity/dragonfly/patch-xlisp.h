--- lib-src/libnyquist/nyquist/xlisp/xlisp.h	2015-10-11 11:24:47.765937000 +0200
+++ lib-src/libnyquist/nyquist/xlisp/xlisp.h	2015-10-11 11:25:23.204292000 +0200
@@ -177,6 +177,19 @@
 #endif
 #endif

+/* DragonFly */
+#ifdef __DragonFly__
+  #if defined(_BYTE_ORDER)
+    #if _BYTE_ORDER == _LITTLE_ENDIAN
+      #define XL_LITTLE_ENDIAN
+    #else
+      #define XL_BIG_ENDIAN
+    #endif
+  #else
+    #error "Byteorder undefined"
+  #endif
+#endif
+
 /* Apple CC */
 #ifdef __APPLE__
 #define NNODES 2000
