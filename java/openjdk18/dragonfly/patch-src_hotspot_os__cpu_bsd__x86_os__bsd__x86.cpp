--- src/hotspot/os_cpu/bsd_x86/os_bsd_x86.cpp.orig	2021-09-14 03:59:48 UTC
+++ src/hotspot/os_cpu/bsd_x86/os_bsd_x86.cpp
@@ -100,7 +100,7 @@
 #define SPELL_REG_FP "ebp"
 #endif // AMD64
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # define context_trapno uc_mcontext.mc_trapno
 # ifdef AMD64
 #  define context_pc uc_mcontext.mc_rip
