--- src/include/sharedLibrary.h.bak	2015-10-03 10:12:51.000000000 +0300
+++ src/include/sharedLibrary.h
@@ -52,7 +52,7 @@ inline void* LoadSharedLibrary( std::str
   {
           std::cerr << ::dlerror( ) << std::endl;
   }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
         tstring freebsdName = unixPrefix;
         freebsdName += libraryName += ".so";
         void* fileHandle = ::dlopen( freebsdName.c_str( ), RTLD_NOW );
