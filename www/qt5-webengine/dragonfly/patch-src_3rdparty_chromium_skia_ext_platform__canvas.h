--- src/3rdparty/chromium/skia/ext/platform_canvas.h.orig	2019-03-07 09:23:57 UTC
+++ src/3rdparty/chromium/skia/ext/platform_canvas.h
@@ -56,7 +56,7 @@ SK_API std::unique_ptr<SkCanvas> CreateP
 // Returns the NativeDrawingContext to use for native platform drawing calls.
 SK_API HDC GetNativeDrawingContext(SkCanvas* canvas);
 
-#elif defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || \
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__) || \
     defined(__sun) || defined(ANDROID) || defined(__APPLE__) ||             \
     defined(__Fuchsia__)
 // Construct a canvas from the given memory region. The memory is not cleared
