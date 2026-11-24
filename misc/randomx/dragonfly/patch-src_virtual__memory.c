--- src/virtual_memory.c.orig
+++ src/virtual_memory.c
@@ -220,7 +220,7 @@
 	mem = mmap(NULL, bytes, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, VM_FLAGS_SUPERPAGE_SIZE_2MB, 0);
 #elif defined(__FreeBSD__)
 	mem = mmap(NULL, bytes, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_ALIGNED_SUPER, -1, 0);
-#elif defined(__OpenBSD__) || defined(__NetBSD__)
+#elif defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	mem = MAP_FAILED; // OpenBSD does not support huge pages
 #else
 	mem = mmap(NULL, bytes, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_HUGETLB | MAP_POPULATE, -1, 0);
