--- third_party/skia/src/ports/SkOSFile_stdio.cpp.orig	2016-03-28 19:05:34 UTC
+++ third_party/skia/src/ports/SkOSFile_stdio.cpp
@@ -146,8 +146,10 @@ void sk_fflush(FILE* f) {
 void sk_fsync(FILE* f) {
 #if !defined(_WIN32) && !defined(SK_BUILD_FOR_ANDROID) && !defined(__UCLIBC__) \
         && !defined(_NEWLIB_VERSION)
+# if ! defined __DragonFly__
     int fd = ::fileno(f);
     ::fsync(fd);
+# endif
 #endif
 }
 
