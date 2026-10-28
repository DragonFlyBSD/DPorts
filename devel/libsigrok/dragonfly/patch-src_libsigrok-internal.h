--- src/libsigrok-internal.h.orig
+++ src/libsigrok-internal.h
@@ -259,8 +259,8 @@
  */
 #define WLFL(p, x)  WL32(p, (union { uint32_t u; float f; }) { .f = x }.u)
 
-/* Portability fixes for FreeBSD. */
-#ifdef __FreeBSD__
+/* Portability fixes for FreeBSD and DragonFly. */
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define LIBUSB_CLASS_APPLICATION 0xfe
 #define libusb_has_capability(x) 0
 #define libusb_handle_events_timeout_completed(ctx, tv, c) \
