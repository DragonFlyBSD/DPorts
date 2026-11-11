--- ipc/chromium/src/base/process_util_posix.cc.orig	2026-10-22 23:18:00 UTC
+++ ipc/chromium/src/base/process_util_posix.cc
@@ -129,10 +129,12 @@
 #elif defined(XP_DARWIN)
   static const rlim_t kSystemDefaultMaxFds = 256;
   static const char kFDDir[] = "/dev/fd";
-#elif defined(__DragonFly__) || defined(XP_FREEBSD) || defined(XP_NETBSD) || \
-    defined(XP_OPENBSD)
+#elif defined(__DragonFly__)
   // the getrlimit below should never fail, so whatever ..
   static const rlim_t kSystemDefaultMaxFds = 1024;
+#elif defined(XP_FREEBSD) || defined(XP_NETBSD) || defined(XP_OPENBSD)
+  // the getrlimit below should never fail, so whatever ..
+  static const rlim_t kSystemDefaultMaxFds = 1024;
   // at least /dev/fd will exist
   static const char kFDDir[] = "/dev/fd";
 #endif
@@ -150,6 +152,24 @@
 
   if (max_fds > INT_MAX) max_fds = INT_MAX;
 
+#if defined(__DragonFly__)
+  // /dev/fd is devfs with a fixed set of entries (0..63) that doesn't follow
+  // the open descriptors: listing it closes fds that aren't open and misses
+  // every fd from 64 up.  Close one by one below the highest fd to keep and
+  // everything above it with closefrom(2).
+  int highest_preserved = STDERR_FILENO;
+  for (rlim_t i = STDERR_FILENO + 1; i < max_fds; ++i) {
+    if (aShouldPreserve(aCtx, static_cast<int>(i))) {
+      highest_preserved = static_cast<int>(i);
+    }
+  }
+  for (int fd = STDERR_FILENO + 1; fd < highest_preserved; ++fd) {
+    if (!aShouldPreserve(aCtx, fd)) {
+      close(fd);
+    }
+  }
+  closefrom(highest_preserved + 1);
+#else
   DirReaderPosix fd_dir(kFDDir);
 
   if (!fd_dir.IsValid()) {
@@ -195,6 +215,7 @@
       }
     }
   }
+#endif
 }
 
 ProcessStatus WaitForProcess(ProcessHandle handle, BlockingWait blocking,
