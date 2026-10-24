--- src/osg/GLExtensions.cpp.orig
+++ src/osg/GLExtensions.cpp
@@ -389,7 +389,7 @@
         static void *handle = dlopen((const char *)0L, RTLD_LAZY);
         return dlsym(handle, funcName);
 
-    #elif defined (__FreeBSD__)
+    #elif defined (__FreeBSD__) || defined (__DragonFly__)
 
         return dlsym( RTLD_DEFAULT, funcName );
 
