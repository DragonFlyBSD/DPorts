--- hotspot/src/os_cpu/bsd_x86/vm/os_bsd_x86.cpp.orig	2012-08-10 18:24:31.000000000 +0200
+++ hotspot/src/os_cpu/bsd_x86/vm/os_bsd_x86.cpp	2012-12-28 13:42:53.182611000 +0100
@@ -94,7 +94,7 @@
 #define SPELL_REG_FP "ebp"
 #endif // AMD64
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # define context_trapno uc_mcontext.mc_trapno
 # ifdef AMD64
 #  define context_pc uc_mcontext.mc_rip
