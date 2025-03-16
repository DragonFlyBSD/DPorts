diff --git third_party/vulkan-validation-layers/src/layers/vulkan/generated/vk_function_pointers.cpp third_party/vulkan-validation-layers/src/layers/vulkan/generated/vk_function_pointers.cpp
index 4f679c0e00ac..24912bc6377b 100644
--- third_party/vulkan-validation-layers/src/layers/vulkan/generated/vk_function_pointers.cpp
+++ third_party/vulkan-validation-layers/src/layers/vulkan/generated/vk_function_pointers.cpp
@@ -53,7 +53,7 @@ static void *get_proc_address(dl_handle library, const char *name) {
     assert(name);
     return (void *)GetProcAddress(library, name);
 }
-#elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__QNX__) || defined(__GNU__)
+#elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__QNX__) || defined(__GNU__) || defined(__DragonFly__)
 
 #include <dlfcn.h>
 
