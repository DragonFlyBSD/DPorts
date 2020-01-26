--- kernel/yosys.cc.orig	2019-08-26 08:37:53 UTC
+++ kernel/yosys.cc
@@ -53,7 +53,7 @@
 #  include <glob.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/sysctl.h>
 #endif
 
@@ -89,7 +89,7 @@ std::vector<void*> memhasher_store;
 
 void memhasher_on()
 {
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 	memhasher_rng += time(NULL) << 16 ^ getpid();
 #endif
 	memhasher_store.resize(0x10000);
@@ -749,7 +749,7 @@ std::string proc_self_dirname()
 		buflen--;
 	return std::string(path, buflen);
 }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 std::string proc_self_dirname()
 {
 	int mib[4] = {CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1};
