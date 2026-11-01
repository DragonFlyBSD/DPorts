diff --git third_party/pdfium/fxjs/fx_date_helpers.cpp third_party/pdfium/fxjs/fx_date_helpers.cpp
index 69ea39f127ab..31ba750438a4 100644
--- third_party/pdfium/fxjs/fx_date_helpers.cpp
+++ third_party/pdfium/fxjs/fx_date_helpers.cpp
@@ -41,7 +41,7 @@ double GetLocalTZA() {
   }
   time_t t = 0;
   FXSYS_time(&t);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   struct tm lt;
   localtime_r(&t, &lt);
   return (double)(-(lt.tm_gmtoff * 1000));
@@ -54,7 +54,7 @@ double GetLocalTZA() {
   _get_timezone(&timezone);
 #endif
   return (double)(-(timezone * 1000));
-#endif // __FreeBSD__
+#endif // __FreeBSD__ || __DragonFly__
 }
 
 int GetDaylightSavingTA(double d) {
