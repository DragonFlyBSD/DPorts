--- src/common/asserts.h.orig	2021-05-28 13:36:29 UTC
+++ src/common/asserts.h
@@ -6,6 +6,9 @@
 #if 0 && defined(Q_CC_MSVC)
 // requires c++2017
 #define OC_REQUIRED_RESULT [[nodiscard]]
+#elif defined(Q_CC_GNU) && !defined(Q_CC_CLANG)
+// gcc takes no [[nodiscard]] after virtual; a GNU attribute is fine there
+#define OC_REQUIRED_RESULT __attribute__((__warn_unused_result__))
 #else
 #define OC_REQUIRED_RESULT Q_REQUIRED_RESULT
 #endif
