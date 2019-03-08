--- ipc/chromium/src/base/shared_memory_posix.cc.intermediate	2019-03-08 09:06:17 UTC
+++ ipc/chromium/src/base/shared_memory_posix.cc
@@ -83,6 +83,11 @@ bool SharedMemory::AppendPosixShmPrefix(
     StringAppendF(str, "snap.%s.", kSnap);
   }
 #endif  // OS_LINUX
+#ifdef OS_DRAGONFLY
+  // DragonFly BSD has a userland IPC implementation, we need to prefix the
+  // path to shm_open(3), preferably with '/tmp'
+  StringAppendF(str, "tmp/");
+#endif
   // Hopefully the "implementation defined" name length limit is long
   // enough for this.
   StringAppendF(str, "org.mozilla.ipc.%d.", static_cast<int>(pid));
