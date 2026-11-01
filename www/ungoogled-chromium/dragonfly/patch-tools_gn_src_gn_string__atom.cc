--- tools/gn/src/gn/string_atom.cc.orig	2026-08-10 22:27:27 UTC
+++ tools/gn/src/gn/string_atom.cc
@@ -221,8 +221,17 @@ class ThreadLocalCache {
   KeySet local_set_;
 };
 
-#if !defined(OS_ZOS)
+#if !defined(OS_ZOS) && !defined(__DragonFly__)
 thread_local ThreadLocalCache s_local_cache;
+#elif defined(__DragonFly__)
+// DragonFly's libc++ runtime link lacks __cxa_thread_atexit, so a thread_local
+// object with a non-trivial destructor cannot link here. Use a thread_local
+// pointer instead (trivial destructor, so no atexit registration is needed)
+// to a leaked per-thread cache — each thread still gets its own unsynchronized
+// cache, and the leak matches the lifetime tradeoff the slab allocator below
+// already makes.
+thread_local ThreadLocalCache* s_local_cache_ptr = new ThreadLocalCache();
+#define s_local_cache (*s_local_cache_ptr)
 #else
 // TODO(gabylb) - zos: thread_local not yet supported, use zoslib's impl'n:
 static ThreadLocalCache s_tlc;
