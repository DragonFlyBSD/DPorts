diff --git skia/ext/platform_canvas.h skia/ext/platform_canvas.h
index 34d8b858f5f..194a55e7f62 100644
--- skia/ext/platform_canvas.h
+++ skia/ext/platform_canvas.h
@@ -58,7 +58,7 @@ SK_API HDC GetNativeDrawingContext(SkCanvas* canvas);
 
 #elif defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || \
     defined(__sun) || defined(ANDROID) || defined(__APPLE__) ||             \
-    defined(__Fuchsia__)
+    defined(__Fuchsia__) || defined(__DragonFly__)
 // Construct a canvas from the given memory region. The memory is not cleared
 // first. @data must be, at least, @height * StrideForWidth(@width) bytes.
 SK_API std::unique_ptr<SkCanvas> CreatePlatformCanvasWithPixels(
