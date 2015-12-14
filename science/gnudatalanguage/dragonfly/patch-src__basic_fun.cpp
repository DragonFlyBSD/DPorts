--- src/basic_fun.cpp.bak	2015-12-14 10:10:10.000000000 +0200
+++ src/basic_fun.cpp
@@ -44,7 +44,7 @@
 # define environ (*_NSGetEnviron())
 #endif
 
-#if defined(__FreeBSD__) || defined(__sun__) || defined(__OpenBSD__)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__sun__) || defined(__OpenBSD__)
 extern "C" char **environ;
 #endif
 
