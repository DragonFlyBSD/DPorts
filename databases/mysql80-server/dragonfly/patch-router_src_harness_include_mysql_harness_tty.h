--- router/src/harness/include/mysql/harness/tty.h.orig	2019-04-13 11:46:31 UTC
+++ router/src/harness/include/mysql/harness/tty.h
@@ -201,7 +201,10 @@ class HARNESS_EXPORT Tty {
         // not on freebsd
         static constexpr const size_t kCarriangeReturnDelayMask = CRDLY;
 #endif
+#ifdef TABDLY
+	// not on dragonfly
         static constexpr const size_t kHorizontalTabDelayMask = TABDLY;
+#endif
 #ifdef BSDLY
         // not on freebsd
         static constexpr const size_t kBackspaceDelayMask = BSDLY;
