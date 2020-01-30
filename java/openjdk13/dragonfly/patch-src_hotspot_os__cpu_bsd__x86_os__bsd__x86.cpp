--- src/hotspot/os_cpu/bsd_x86/os_bsd_x86.cpp.orig	2019-10-16 18:31:09 UTC
+++ src/hotspot/os_cpu/bsd_x86/os_bsd_x86.cpp
@@ -101,7 +101,7 @@
 #define SPELL_REG_FP "ebp"
 #endif // AMD64
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # define context_trapno uc_mcontext.mc_trapno
 # ifdef AMD64
 #  define context_pc uc_mcontext.mc_rip
