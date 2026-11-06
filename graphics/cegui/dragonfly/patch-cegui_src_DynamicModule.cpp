--- cegui/src/DynamicModule.cpp.orig	2016-04-23 18:19:40 UTC
+++ cegui/src/DynamicModule.cpp
@@ -42,7 +42,7 @@
     typedef HMODULE DYNLIB_HANDLE;
 #endif
 
-#if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__HAIKU__) || defined(__CYGWIN__)
+#if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__HAIKU__) || defined(__CYGWIN__)
 #   include "dlfcn.h"
 #   define DYNLIB_LOAD( a ) dlopen( (a).c_str(), RTLD_LAZY )
 #   define DYNLIB_GETSYM( a, b ) dlsym( a, (b).c_str() )
@@ -130,7 +130,7 @@ static String getModuleDirEnvVar()
 static String getFailureString()
 {
     String retMsg;
-#if defined(__linux__) || defined (__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__HAIKU__) || defined(__CYGWIN__)
+#if defined(__linux__) || defined (__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__HAIKU__) || defined(__CYGWIN__)
     retMsg = dlerror();
 #elif defined(__WIN32__) || defined(_WIN32)
     LPVOID msgBuffer;
@@ -200,7 +200,7 @@ DynamicModule::DynamicModule(const String& name) :
 
     d_pimpl->d_handle = DynLibLoad(d_pimpl->d_moduleName);
 
-#if defined(__linux__) || defined(__APPLE__) || defined(__MINGW32__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__HAIKU__)
+#if defined(__linux__) || defined(__APPLE__) || defined(__MINGW32__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__HAIKU__)
     // see if adding a leading 'lib' helps us to open the library
     if (!d_pimpl->d_handle && d_pimpl->d_moduleName.compare(0, 3, "lib") != 0)
     {
