--- src/vtpty/Process_unix.cpp.orig
+++ src/vtpty/Process_unix.cpp
@@ -24,7 +24,7 @@
 #include <system_error>
 #include <type_traits>
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
     #include <utmp.h>
 #endif
 
@@ -56,7 +56,7 @@
 #ifdef __APPLE__
     #include <crt_externs.h>
     #define environ (*_NSGetEnviron())
-#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#elif (defined(__FreeBSD__) || defined(__DragonFly__)) || defined(__NetBSD__) || defined(__OpenBSD__)
 extern "C" char** environ;
 #endif
 
