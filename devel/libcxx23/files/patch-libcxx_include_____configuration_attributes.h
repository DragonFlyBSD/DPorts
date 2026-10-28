--- libcxx/include/__configuration/attributes.h.orig
+++ libcxx/include/__configuration/attributes.h
@@ -213,7 +213,15 @@
 #else
 #  define _LIBCPP_HIDE_FROM_ABI _LIBCPP_HIDDEN _LIBCPP_EXCLUDE_FROM_EXPLICIT_INSTANTIATION
 #endif
-#define _LIBCPP_HIDE_FROM_ABI_VIRTUAL _LIBCPP_HIDDEN _LIBCPP_EXCLUDE_FROM_EXPLICIT_INSTANTIATION
+// GCC has no exclude_from_explicit_instantiation attribute, so
+// _LIBCPP_EXCLUDE_FROM_EXPLICIT_INSTANTIATION falls back to always_inline. GCC
+// cannot honour that on a virtual function reached through a vtable, and
+// reports a hard error rather than declining to inline.
+#if defined(_LIBCPP_COMPILER_GCC)
+#  define _LIBCPP_HIDE_FROM_ABI_VIRTUAL _LIBCPP_HIDDEN
+#else
+#  define _LIBCPP_HIDE_FROM_ABI_VIRTUAL _LIBCPP_HIDDEN _LIBCPP_EXCLUDE_FROM_EXPLICIT_INSTANTIATION
+#endif
 
 // This macro makes sure that private classes which aren't necessarily part of the ABI change their name every release.
 // The intention is _not_ to put it on every private class, but only on classes where type name stability implies ABI
