--- src/appleseed.studio/main/main.cpp.orig	2016-09-30 11:36:29.000000000 +0300
+++ src/appleseed.studio/main/main.cpp
@@ -177,6 +177,9 @@ namespace
 #ifdef __linux__
         preprocessor.define_symbol("__linux__");
 #endif
+#ifdef __DragonFly__
+        preprocessor.define_symbol("__DragonFly__");
+#endif
 #ifdef __FreeBSD__
         preprocessor.define_symbol("__FreeBSD__");
 #endif
