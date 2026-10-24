--- extra/abseil/abseil-cpp-20230802.1/absl/base/internal/sysinfo.cc.orig	2026-04-07 15:27:15 UTC
+++ extra/abseil/abseil-cpp-20230802.1/absl/base/internal/sysinfo.cc
@@ -443,6 +443,10 @@
 #elif defined(__FreeBSD__)
 
 pid_t GetTID() { return static_cast<pid_t>(pthread_getthreadid_np()); }
+
+#elif defined(__DragonFly__)
+
+pid_t GetTID() { return static_cast<pid_t>(lwp_gettid()); }
 
 #elif defined(__OpenBSD__)
 
