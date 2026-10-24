--- src/hotspot/share/utilities/macros.hpp.orig
+++ src/hotspot/share/utilities/macros.hpp
@@ -423,7 +423,7 @@
 #define NOT_WINDOWS(code) code
 #endif
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 #ifndef BSD
 #define BSD
 #endif // BSD defined in <sys/param.h>
