--- third_party/webrtc/base/systeminfo.cc.orig	2015-06-23 20:27:15 UTC
+++ third_party/webrtc/base/systeminfo.cc
@@ -173,14 +173,16 @@
 #elif defined(__native_client__)
   // TODO(ryanpetrie): Implement this via PPAPI when it's available.
 #elif defined(OS_FREEBSD)
-  void* sysctl_value;
+  int sysctl_value;
   size_t length = sizeof(sysctl_value);
   if (!sysctlbyname("hw.ncpu", &sysctl_value, &length, NULL, 0)) {
-    physical_cpus_ = *static_cast<int*>(sysctl_value);
+    physical_cpus_ = sysctl_value;
   }
+#if !defined(__DragonFly__)
   if (!sysctlbyname("kern.smp.cpus", &sysctl_value, &length, NULL, 0)) {
-    logical_cpus_ = *static_cast<int*>(sysctl_value);
+    logical_cpus_ = sysctl_value;
   }
+#endif
   // L3 / L2 cache size?
   // CPU family/model/stepping (available in dmesg, kernel only TODO) 
 #else  // WEBRTC_LINUX
