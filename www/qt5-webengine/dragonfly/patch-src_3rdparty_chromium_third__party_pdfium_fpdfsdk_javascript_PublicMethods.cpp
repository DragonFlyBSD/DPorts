--- src/3rdparty/chromium/third_party/pdfium/fpdfsdk/javascript/PublicMethods.cpp.intermediate	2018-05-26 13:48:33.000000000 +0000
+++ src/3rdparty/chromium/third_party/pdfium/fpdfsdk/javascript/PublicMethods.cpp
@@ -68,7 +68,7 @@ const FX_WCHAR* const fullmonths[] = {L"
                                       L"July",    L"August",   L"September",
                                       L"October", L"November", L"December"};
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 /*
  * cvt.c - IEEE floating point formatting routines for FreeBSD
  * from GNU libc-4.6.27
