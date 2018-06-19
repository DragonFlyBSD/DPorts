--- src/3rdparty/chromium/third_party/pdfium/fpdfsdk/javascript/JS_Value.cpp.intemediate	2018-05-26 13:48:33.000000000 +0000
+++ src/3rdparty/chromium/third_party/pdfium/fpdfsdk/javascript/JS_Value.cpp
@@ -471,7 +471,7 @@ double _getLocalTZA() {
   long timezone = 0;
   _get_timezone(&timezone);
 #endif
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   return (double)(-(lt->tm_gmtoff * 1000));
 #else
   return (double)(-(timezone * 1000));
