--- rts/sm/HeapAlloc.h.orig	2023-04-16 17:54:20 UTC
+++ rts/sm/HeapAlloc.h
@@ -140,6 +140,14 @@ typedef StgWord32 MbcCacheLine;
 typedef StgWord64 MbcCacheLine;
 #endif
 
+#if defined(THREADED_RTS)
+// needed for HEAP_ALLOCED below
+extern SpinLock gc_alloc_block_sync;
+#endif
+
+#define ACQUIRE_ALLOC_BLOCK_SPIN_LOCK() ACQUIRE_SPIN_LOCK(&gc_alloc_block_sync)
+#define RELEASE_ALLOC_BLOCK_SPIN_LOCK() RELEASE_SPIN_LOCK(&gc_alloc_block_sync)
+
 typedef StgWord8  MBlockMapLine;
 
 #define MBLOCK_MAP_LINE(p)  (((StgWord)p & 0xffffffff) >> (MBLOCK_SHIFT + MBC_LINE_BITS))
