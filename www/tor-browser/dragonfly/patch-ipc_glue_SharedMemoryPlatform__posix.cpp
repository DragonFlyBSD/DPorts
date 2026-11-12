--- ipc/glue/SharedMemoryPlatform_posix.cpp.orig	2026-09-04 00:01:13 UTC
+++ ipc/glue/SharedMemoryPlatform_posix.cpp
@@ -476,7 +476,8 @@ bool Platform::Protect(char* aAddr, size_t aSize, Acce
 }
 
 void* Platform::FindFreeAddressSpace(size_t aSize) {
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
+// DragonFly, like FreeBSD, has no MAP_NORESERVE.
   constexpr int flags = MAP_ANONYMOUS | MAP_NORESERVE | MAP_PRIVATE;
 #else
   constexpr int flags = MAP_ANONYMOUS | MAP_PRIVATE;
