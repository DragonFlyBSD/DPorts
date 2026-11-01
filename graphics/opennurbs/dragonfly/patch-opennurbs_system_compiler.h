--- opennurbs_system_compiler.h.orig
+++ opennurbs_system_compiler.h
@@ -283,16 +283,20 @@
 #define ON_PRAGMA_WARNING_DISABLE_CLANG(ON_PRAGMA_WARNING_DISABLE_param) clang diagnostic ignored ON_PRAGMA_WARNING_DISABLE_param  // Apple CLang warning disable
 
 
-#if defined(__has_feature) && __has_feature(cxx_noexcept)
+#ifdef __has_feature
+#if __has_feature(cxx_noexcept)
 #undef ON_NOEXCEPT
 #define ON_NOEXCEPT noexcept
+#endif
 #endif
 
-#if defined(__has_extension) && __has_extension(cxx_rvalue_references) && !defined(ON_HAS_RVALUEREF)
+#ifdef __has_extension
+#if __has_extension(cxx_rvalue_references) && !defined(ON_HAS_RVALUEREF)
 #define ON_HAS_RVALUEREF
 #elif defined(ON_HAS_RVALUEREF)
 #undef ON_HAS_RVALUEREF
 #endif
+#endif
 
 #elif defined(__GNUG_) || defined(__GNUG__) || defined(__GNUC_) || defined(__GNUC__) || defined(_GNU_SOURCE) || defined(__GNU_SOURCE)
 /*
