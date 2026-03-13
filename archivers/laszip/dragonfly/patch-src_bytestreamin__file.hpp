--- src/bytestreamin_file.hpp.orig	Wed Oct 25 18:35:15 2023
+++ src/bytestreamin_file.hpp	Sun Nov
@@ -38,6 +38,12 @@
 
 #include <stdio.h>
 
+#if defined(__DragonFly__)
+#if !defined(off64_t)
+#define off64_t off_t
+#endif
+#endif
+
 #if defined(_MSC_VER) && (_MSC_VER < 1300)
 extern "C" __int64 _cdecl _ftelli64(FILE*);
 extern "C" int _cdecl _fseeki64(FILE*, __int64, int);
