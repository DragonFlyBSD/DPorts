--- righandling/dabstick-dll/dabstick-dll.cpp.orig	2012-09-29 21:12:57.000000000 +0300
+++ righandling/dabstick-dll/dabstick-dll.cpp
@@ -110,7 +110,7 @@ int	error;
 #ifdef	__MINGW32__
 	Handle		= LoadLibrary ((wchar_t *)L"rtlsdr.dll");
 #else
-	Handle		= dlopen ("./librtlsdr.so", RTLD_NOW);
+	Handle		= dlopen ("librtlsdr.so", RTLD_NOW);
 #endif
 	if (Handle == NULL) {
 	   fprintf (stderr, "Failed to open rtlsdr.dll\n");
