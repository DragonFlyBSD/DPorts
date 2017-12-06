--- hotspot/src/os/bsd/vm/os_bsd.cpp.orig	2017-12-06 14:50:04 UTC
+++ hotspot/src/os/bsd/vm/os_bsd.cpp
@@ -114,7 +114,7 @@
 # include <vm/vm_param.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 # include <elf.h>
 #endif
 
@@ -2396,6 +2396,8 @@ bool os::remove_stack_guard_pages(char*
 
 static address _highest_vm_reserved_address = NULL;
 
+#define MAP_ALIGNED(n)	((n) << 24)
+
 // If 'fixed' is true, anon_mmap() will attempt to reserve anonymous memory
 // at 'requested_addr'. If there are existing memory mappings at the same
 // location, however, they will be overwritten. If 'fixed' is false,
@@ -2983,7 +2985,7 @@ OSReturn os::set_native_priority(Thread*
 #ifdef __OpenBSD__
   // OpenBSD pthread_setprio starves low priority threads
   return OS_OK;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   int ret = pthread_setprio(thread->osthread()->pthread_id(), newpri);
   return (ret == 0) ? OS_OK : OS_ERR;
 #elif defined(__APPLE__) || defined(__NetBSD__)
@@ -3012,7 +3014,7 @@ OSReturn os::get_native_priority(const T
   }
 
   errno = 0;
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
   *priority_ptr = pthread_getprio(thread->osthread()->pthread_id());
 #elif defined(__APPLE__) || defined(__NetBSD__)
   int policy;
