--- apps/ymir-sdl3/src/util/os_exception_handler.cpp.orig
+++ apps/ymir-sdl3/src/util/os_exception_handler.cpp
@@ -18,7 +18,7 @@
     #include <signal.h>
 
     #include <bits/types/siginfo_t.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     #include <iterator>
     #include <signal.h>
 #elif defined(__APPLE__)
@@ -163,7 +163,7 @@
     g_vehPtr = nullptr;
 }*/
 
-#elif defined(__linux__) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 // -----------------------------------------------------------------------------
 // Linux and FreeBSD implementation
@@ -236,8 +236,12 @@
                        mcontext.mc_r10, mcontext.mc_r11);
         fmt::format_to(out, "R12={:016X} R13={:016X} R14={:016X} R15={:016X}\n", mcontext.mc_r12, mcontext.mc_r13,
                        mcontext.mc_r14, mcontext.mc_r15);
+        #if defined(__DragonFly__)
+        fmt::format_to(out, "CS={:02X} SS={:02X}\n", mcontext.mc_cs, mcontext.mc_ss);
+        #else
         fmt::format_to(out, "CS={:02X} DS={:02X} ES={:02X} FS={:02X} GS={:02X} SS={:02X}\n", mcontext.mc_cs,
                        mcontext.mc_ds, mcontext.mc_es, mcontext.mc_fs, mcontext.mc_gs, mcontext.mc_ss);
+        #endif
         fmt::format_to(out, "RIP={:016X} RFlags={:016X}", mcontext.mc_rip, mcontext.mc_rflags);
 
         #elif defined(_M_ARM64) || defined(__aarch64__)
