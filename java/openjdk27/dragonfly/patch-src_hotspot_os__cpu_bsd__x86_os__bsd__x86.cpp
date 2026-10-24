--- src/hotspot/os_cpu/bsd_x86/os_bsd_x86.cpp.orig
+++ src/hotspot/os_cpu/bsd_x86/os_bsd_x86.cpp
@@ -89,7 +89,7 @@
 #define SPELL_REG_FP "rbp"
 #define REG_BCP context_r13
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # define context_trapno uc_mcontext.mc_trapno
 # define context_pc uc_mcontext.mc_rip
 # define context_sp uc_mcontext.mc_rsp
