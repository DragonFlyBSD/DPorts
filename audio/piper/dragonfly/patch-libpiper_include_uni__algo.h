--- libpiper/include/uni_algo.h.orig
+++ libpiper/include/uni_algo.h
@@ -64272,6 +64272,11 @@
 
 namespace una::version {
 
+#ifdef __DragonFly__
+// <sys/types.h> defines major() and minor() as macros
+#undef major
+#undef minor
+#endif
 class library_v
 {
 private:
