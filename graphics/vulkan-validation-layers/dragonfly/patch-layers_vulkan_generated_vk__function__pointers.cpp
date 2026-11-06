--- layers/vulkan/generated/vk_function_pointers.cpp.orig	2026-08-14 11:28:44 UTC
+++ layers/vulkan/generated/vk_function_pointers.cpp
@@ -53,7 +53,7 @@ static void *get_proc_address(dl_handle library, const
     assert(name);
     return (void *)GetProcAddress(library, name);
 }
-#elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__QNX__) || defined(__GNU__)
+#elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__) || defined(__QNX__) || defined(__GNU__)
 
 #include <dlfcn.h>
 
