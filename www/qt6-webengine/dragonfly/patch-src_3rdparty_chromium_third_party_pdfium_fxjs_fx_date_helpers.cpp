diff --git third_party/pdfium/fxjs/fx_date_helpers.cpp third_party/pdfium/fxjs/fx_date_helpers.cpp
index 897fce1ae0c..9dc8af10691 100644
--- src/3rdparty/chromium/third_party/pdfium/fxjs/fx_date_helpers.cpp
+++ src/3rdparty/chromium/third_party/pdfium/fxjs/fx_date_helpers.cpp
@@ -37,7 +37,7 @@ double GetLocalTZA() {
     return 0;
   time_t t = 0;
   FXSYS_time(&t);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   struct tm lt;
   localtime_r(&t, &lt);
   return (double)(-(lt.tm_gmtoff * 1000));
@@ -50,7 +50,7 @@ double GetLocalTZA() {
   _get_timezone(&timezone);
 #endif
   return (double)(-(timezone * 1000));
-#endif // __FreeBSD__
+#endif // __FreeBSD__ || __DragonFly__
 }
 
 int GetDaylightSavingTA(double d) {
