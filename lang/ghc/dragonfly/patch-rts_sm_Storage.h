--- rts/sm/Storage.h.orig	2023-04-16 17:54:20 UTC
+++ rts/sm/Storage.h
@@ -43,15 +43,6 @@ extern Mutex sm_mutex;
 #define ASSERT_SM_LOCK()
 #endif
 
-#if defined(THREADED_RTS)
-// needed for HEAP_ALLOCED below
-extern SpinLock gc_alloc_block_sync;
-#endif
-
-#define ACQUIRE_ALLOC_BLOCK_SPIN_LOCK() ACQUIRE_SPIN_LOCK(&gc_alloc_block_sync)
-#define RELEASE_ALLOC_BLOCK_SPIN_LOCK() RELEASE_SPIN_LOCK(&gc_alloc_block_sync)
-
-
 /* -----------------------------------------------------------------------------
    The write barrier for MVARs and TVARs
    -------------------------------------------------------------------------- */
