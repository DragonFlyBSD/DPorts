--- deps/stlplus/portability/build.cpp.orig	2018-09-16 03:57:30 UTC
+++ deps/stlplus/portability/build.cpp
@@ -37,6 +37,8 @@ namespace stlplus
     return std::string("Cygwin");
 #elif defined __gnu_linux__
     return std::string("GNU/Linux");
+#elif defined __DragonFly__
+    return std::string("DragonFly");
 #elif defined __FreeBSD__
     return std::string("FreeBSD");
 #else
