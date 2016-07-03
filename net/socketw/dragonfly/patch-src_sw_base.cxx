--- src/sw_base.cxx.orig	2016-01-16 11:02:40.000000000 +0200
+++ src/sw_base.cxx
@@ -58,7 +58,7 @@
 #endif
 
 // Socklen hack
-#if defined(__linux__) || defined(__FreeBSD__) // || defined(__bsdi__) || defined(__NetBSD__) too, perhaps? Bugreports, please!
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__) // || defined(__bsdi__) || defined(__NetBSD__) too, perhaps? Bugreports, please!
   #define sw_socklen_t socklen_t
 #elif defined(_WIN32) || defined(__osf__)
   #define sw_socklen_t int
