--- src/capi/sfcgal_c.h.orig
+++ src/capi/sfcgal_c.h
@@ -27,7 +27,7 @@
   #else
     #define SFCGAL_DEPRECATED(msg)
   #endif
-#elif defined(__has_cpp_attribute)
+#elif defined(__cplusplus) && defined(__has_cpp_attribute)
   #if __has_cpp_attribute(deprecated)
     #define SFCGAL_DEPRECATED(msg) [[deprecated(msg)]]
   #elif defined(__clang__) || defined(__GNUC__)
