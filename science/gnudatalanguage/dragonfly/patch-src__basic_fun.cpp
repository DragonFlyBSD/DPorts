--- src/basic_fun.cpp.bak	2016-01-13 18:37:20.000000000 +0200
+++ src/basic_fun.cpp
@@ -48,7 +48,7 @@
 # define environ (*_NSGetEnviron())
 #endif
 
-#if defined(__FreeBSD__) || defined(__sun__) || defined(__OpenBSD__)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__sun__) || defined(__OpenBSD__)
 extern "C" char **environ;
 #endif
 
