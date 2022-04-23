--- src/3rdparty/chromium/third_party/pdfium/fxjs/cjs_publicmethods.cpp.intermediate	2019-05-06 11:10:02.000000000 +0000
+++ src/3rdparty/chromium/third_party/pdfium/fxjs/cjs_publicmethods.cpp
@@ -72,7 +72,7 @@ const wchar_t* const kFullMonths[] = {L"
                                       L"July",    L"August",   L"September",
                                       L"October", L"November", L"December"};
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 /*
  * cvt.c - IEEE floating point formatting routines for FreeBSD
  * from GNU libc-4.6.27
