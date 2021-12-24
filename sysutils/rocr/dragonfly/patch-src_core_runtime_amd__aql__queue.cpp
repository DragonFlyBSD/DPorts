--- src/core/runtime/amd_aql_queue.cpp.orig	2018-11-19 03:01:00 UTC
+++ src/core/runtime/amd_aql_queue.cpp
@@ -42,7 +42,7 @@
 
 #include "core/inc/amd_aql_queue.h"
 
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <fcntl.h>
 #include <sys/mman.h>
 #include <sys/stat.h>
@@ -456,7 +456,7 @@ uint32_t AqlQueue::ComputeRingBufferMinP
   uint32_t min_bytes = 0x400;
 
   if (queue_full_workaround_ == 1) {
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
     // Double mapping requires one page of backing store.
     min_bytes = Max(min_bytes, 0x1000U);
 #endif
@@ -492,13 +492,15 @@ void AqlQueue::AllocRegisteredRingBuffer
         uint32_t(queue_size_pkts * sizeof(core::AqlPacket));
     ring_buf_alloc_bytes_ = 2 * ring_buf_phys_size_bytes;
 
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
     // Create a system-unique shared memory path for this thread.
     char ring_buf_shm_path[16];
 #ifdef __FreeBSD__
     long myID;
     thr_self(&myID);
     pid_t sys_unique_tid = pid_t(thr_self);
+#elif defined(__DragonFly__)
+    pid_t sys_unique_tid = pid_t(syscall(SYS_lwp_gettid));
 #else
     pid_t sys_unique_tid = pid_t(syscall(__NR_gettid));
 #endif
@@ -639,7 +641,7 @@ void AqlQueue::AllocRegisteredRingBuffer
 
 void AqlQueue::FreeRegisteredRingBuffer() {
   if ((agent_->profile() == HSA_PROFILE_FULL) && queue_full_workaround_) {
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
     munmap(ring_buf_, ring_buf_alloc_bytes_);
 #endif
 #ifdef _WIN32
@@ -656,7 +658,7 @@ void AqlQueue::FreeRegisteredRingBuffer(
 }
 
 void AqlQueue::CloseRingBufferFD(const char* ring_buf_shm_path, int fd) const {
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #if !defined(HAVE_MEMFD_CREATE)
   shm_unlink(ring_buf_shm_path);
 #endif
@@ -668,7 +670,7 @@ void AqlQueue::CloseRingBufferFD(const c
 
 int AqlQueue::CreateRingBufferFD(const char* ring_buf_shm_path,
                                  uint32_t ring_buf_phys_size_bytes) const {
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
   int fd;
 #ifdef HAVE_MEMFD_CREATE
   fd = syscall(__NR_memfd_create, ring_buf_shm_path, 0);
