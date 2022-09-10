--- vendor/logging/liblog/logprint.cpp.orig	2022-06-10 23:11:16 UTC
+++ vendor/logging/liblog/logprint.cpp
@@ -426,7 +426,7 @@ error:
   return -1;
 }
 
-#if defined(__MINGW32__) || defined(__FreeBSD__)  // Windows doesn't have strsep(3).
+#if defined(__MINGW32__) || defined(__FreeBSD__)  || defined(__DragonFly__) // Windows doesn't have strsep(3).
 static char* strsep(char** stringp, const char* delim) {
   char* token;
   char* ret = *stringp;
