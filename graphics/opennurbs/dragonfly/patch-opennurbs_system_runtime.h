--- opennurbs_system_runtime.h.orig
+++ opennurbs_system_runtime.h
@@ -202,6 +202,16 @@
 #endif
 
 #if !defined(ON_BIG_ENDIAN) && !defined(ON_LITTLE_ENDIAN)
+/* gcc defines no __LITTLE_ENDIAN__ on x86, which the FreeBSD block
+ * above relies on; use __BYTE_ORDER__, which gcc and clang define. */
+#if __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
+#define ON_BIG_ENDIAN
+#elif __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
+#define ON_LITTLE_ENDIAN
+#endif
+#endif
+
+#if !defined(ON_BIG_ENDIAN) && !defined(ON_LITTLE_ENDIAN)
 #error Exactly one of ON_LITTLE_ENDIAN or ON_BIG_ENDIAN should be defined.
 #endif
 
