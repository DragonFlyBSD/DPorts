--- lib-src/libnyquist/nyquist/xlisp/xlisp.h.intermediate	2021-09-12 11:50:39 UTC
+++ lib-src/libnyquist/nyquist/xlisp/xlisp.h
@@ -194,6 +194,19 @@ extern long ptrtoabs();
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
 /* Apple CC (xcode, macOS, macintosh) */
 #ifdef __APPLE__
 #define NNODES 2000
