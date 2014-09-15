--- ../../libs/luajit/LuaJIT-2.0.3/src/lj_alloc.c.orig	2014-03-14 09:24:13 UTC
+++ ../../libs/luajit/LuaJIT-2.0.3/src/lj_alloc.c
@@ -188,6 +188,33 @@ static LJ_AINLINE void *CALL_MMAP(size_t
   return ptr;
 }
 
+#elif defined(__DragonFly__)
+
+#define MMAP_REGION_START	((uintptr_t)0x1000)
+#define MMAP_REGION_END		((uintptr_t)0x80000000)
+
+static LJ_AINLINE void *CALL_MMAP(size_t size)
+{
+  int olderr = errno;
+  /* Hint for next allocation. Doesn't need to be thread-safe. */
+  static uintptr_t alloc_hint = MMAP_REGION_START;
+  int retry = 0;
+  for (;;) {
+    void *p = mmap((void *)alloc_hint, size, MMAP_PROT, MMAP_FLAGS, -1, 0);
+    if ((uintptr_t)p >= 0 && (uintptr_t)p + size < MMAP_REGION_END) {
+      alloc_hint = (uintptr_t)p + size;
+      errno = olderr;
+      return p;
+    }
+    if (p != CMFAIL) munmap(p, size);
+    if (retry) break;
+    retry = 1;
+    alloc_hint += 0x100000;
+  }
+  errno = olderr;
+  return CMFAIL;
+}
+
 #elif LJ_TARGET_OSX || LJ_TARGET_PS4 || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__sun__)
 
 /* OSX and FreeBSD mmap() use a naive first-fit linear search.
