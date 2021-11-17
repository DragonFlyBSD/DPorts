--- OrthancFramework/Sources/SharedLibrary.cpp.orig	2021-11-14 15:03:56.823952000 +0100
+++ OrthancFramework/Sources/SharedLibrary.cpp	2021-11-14 15:07:57.958582000 +0100
@@ -30,7 +30,7 @@
 
 #if defined(_WIN32)
 #include <windows.h>
-#elif defined(__linux__) || (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__linux__) || (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <dlfcn.h>
 #else
 #error Support your platform here
@@ -66,7 +66,7 @@
       }
     }
 
-#elif defined(__linux__) || (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__linux__) || (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
    
     /**
      * "RTLD_LOCAL" is the default, and is only present to be
@@ -109,7 +109,7 @@
     {
 #if defined(_WIN32)
       ::FreeLibrary((HMODULE)handle_);
-#elif defined(__linux__) || (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__linux__) || (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
       ::dlclose(handle_);
 #else
 #error Support your platform here
@@ -133,7 +133,7 @@
 
 #if defined(_WIN32)
     return ::GetProcAddress((HMODULE)handle_, name.c_str());
-#elif defined(__linux__) || (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__linux__) || (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
     return ::dlsym(handle_, name.c_str());
 #else
 #error Support your platform here
