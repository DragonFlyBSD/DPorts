--- libgag/include/StreamBackend.h.orig	2009-06-14 13:11:34.000000000 +0300
+++ libgag/include/StreamBackend.h
@@ -28,6 +28,9 @@
 #ifdef putc
 #undef putc
 #endif
+#ifdef getc
+#undef getc
+#endif
 
 namespace GAGCore
 {
