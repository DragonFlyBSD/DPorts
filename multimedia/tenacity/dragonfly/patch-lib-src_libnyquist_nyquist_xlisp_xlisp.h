--- lib-src/libnyquist/nyquist/xlisp/xlisp.h.orig
+++ lib-src/libnyquist/nyquist/xlisp/xlisp.h
@@ -139,6 +139,15 @@
 #endif
 #endif
 
+/* DragonFly */
+#ifdef __DragonFly__
+#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
+#define XL_LITTLE_ENDIAN
+#else
+#define XL_BIG_ENDIAN
+#endif
+#endif
+
 /* default important definitions */
 #ifndef NNODES
 #define NNODES		1000
