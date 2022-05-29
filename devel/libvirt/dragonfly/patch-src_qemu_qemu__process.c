--- src/qemu/qemu_process.c.orig	2022-03-01 09:08:21 UTC
+++ src/qemu/qemu_process.c
@@ -27,7 +27,7 @@
 #include <sys/stat.h>
 #if defined(__linux__)
 # include <linux/capability.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) && !defined(__DragonFly__)
 # include <sys/param.h>
 # include <sys/cpuset.h>
 #endif
@@ -9283,6 +9283,8 @@ qemuProcessQMPInit(qemuProcessQMP *proc)
 
 #if defined(__linux__)
 # define hwaccel "kvm:tcg"
+#elif defined(__DragonFly__)
+# define hwaccel "nvmm:tcg"
 #elif defined(__APPLE__)
 # define hwaccel "hvf:tcg"
 #else
