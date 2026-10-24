--- tests/rigtestlibusb.c.orig	2026-04-15 21:51:29 UTC
+++ tests/rigtestlibusb.c
@@ -41,7 +41,9 @@
 #  endif
 #endif
 
-#if HAVE_LIBUSB
+/* DragonFly base -lusb lacks the libusb-1.0 BOS/SuperSpeed helpers
+ * (libusb_get_bos_descriptor etc.); fall through to the stub main below. */
+#if HAVE_LIBUSB && !defined(__DragonFly__)
 int verbose = 0;
 
 static void print_endpoint_comp(const struct
