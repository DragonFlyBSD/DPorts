--- ipc/glue/SharedMemoryPlatform_posix.cpp.orig
+++ ipc/glue/SharedMemoryPlatform_posix.cpp
@@ -449,7 +449,8 @@
 }
 
 void* Platform::FindFreeAddressSpace(size_t aSize) {
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
+// DragonFly, like FreeBSD, has no MAP_NORESERVE.
   constexpr int flags = MAP_ANONYMOUS | MAP_NORESERVE | MAP_PRIVATE;
 #else
   constexpr int flags = MAP_ANONYMOUS | MAP_PRIVATE;
