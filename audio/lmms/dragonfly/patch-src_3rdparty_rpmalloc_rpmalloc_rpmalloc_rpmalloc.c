--- src/3rdparty/rpmalloc/rpmalloc/rpmalloc/rpmalloc.c.intermediate	2019-05-26 13:16:15.000000000 +0000
+++ src/3rdparty/rpmalloc/rpmalloc/rpmalloc/rpmalloc.c
@@ -1627,7 +1627,7 @@ _memory_map_os(size_t size, size_t* offs
 #else
 #  if defined(__APPLE__)
 	void* ptr = mmap(0, size + padding, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_UNINITIALIZED, (_memory_huge_pages ? VM_FLAGS_SUPERPAGE_SIZE_2MB : -1), 0);
-#  elif defined(__FreeBSD__)
+#  elif defined(__FreeBSD__) || defined(__DragonFly__)
 	void* ptr = mmap(0, size + padding, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_UNINITIALIZED, -1, 0);
 #  else
 	void* ptr = mmap(0, size + padding, PROT_READ | PROT_WRITE, (_memory_huge_pages ? MAP_HUGETLB : 0) | MAP_PRIVATE | MAP_ANONYMOUS | MAP_UNINITIALIZED, -1, 0);
