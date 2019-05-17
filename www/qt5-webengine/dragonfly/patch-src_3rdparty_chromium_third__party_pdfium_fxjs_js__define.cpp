--- src/3rdparty/chromium/third_party/pdfium/fxjs/js_define.cpp.intermediate	2019-05-06 11:10:02.000000000 +0000
+++ src/3rdparty/chromium/third_party/pdfium/fxjs/js_define.cpp
@@ -31,7 +31,7 @@ double GetLocalTZA() {
   long timezone = 0;
   _get_timezone(&timezone);
 #endif  // _FX_PLATFORM_ == _FX_PLATFORM_WINDOWS_
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   return (double)(-(lt->tm_gmtoff * 1000));
 #else
   return (double)(-(timezone * 1000));
