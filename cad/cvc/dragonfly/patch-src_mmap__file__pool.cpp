--- src/mmap_file_pool.cpp.intermediate	2022-01-26 04:54:11.000000000 +0000
+++ src/mmap_file_pool.cpp
@@ -116,7 +116,7 @@ namespace mmap_allocator_namespace {
 			throw mmap_allocator_exception("Error in remmap(fd)");
 
 		void *last_address = memory_area;
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		memory_area = mmap(last_address, size_mapped, PROT_READ, MAP_SHARED, fd, 0);
 #else
 		memory_area = mmap(last_address, size_mapped, PROT_READ, MAP_SHARED | MAP_NORESERVE, fd, 0);
