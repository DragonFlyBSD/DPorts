--- kernel/yosys.cc.orig	2026-10-23 00:00:00 UTC
+++ kernel/yosys.cc
@@ -66,7 +66,7 @@
 #  include <glob.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #  include <sys/sysctl.h>
 #endif
 
@@ -136,7 +136,7 @@
 
 void memhasher_on()
 {
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 	memhasher_rng += time(NULL) << 16 ^ getpid();
 #endif
 	memhasher_store.resize(0x10000);
@@ -494,7 +494,7 @@
 	}
 	return path;
 }
-#elif defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 std::string proc_self_dirname()
 {
 #ifdef __NetBSD__
