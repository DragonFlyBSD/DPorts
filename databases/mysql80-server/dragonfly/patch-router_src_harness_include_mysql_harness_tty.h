--- router/src/harness/include/mysql/harness/tty.h.orig	2019-12-09 19:53:17 UTC
+++ router/src/harness/include/mysql/harness/tty.h
@@ -201,7 +201,9 @@ class HARNESS_EXPORT Tty {
         // not on freebsd
         static constexpr const size_t kCarriangeReturnDelayMask = CRDLY;
 #endif
+#ifdef TABDLY
         static constexpr const size_t kHorizontalTabDelayMask = TABDLY;
+#endif
 #ifdef BSDLY
         // not on freebsd
         static constexpr const size_t kBackspaceDelayMask = BSDLY;
