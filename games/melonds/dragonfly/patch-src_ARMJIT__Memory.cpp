--- src/ARMJIT_Memory.cpp.orig
+++ src/ARMJIT_Memory.cpp
@@ -79,7 +79,7 @@
         #define CONTEXT_PC uc_mcontext.gregs[REG_RIP]
     #elif defined(__APPLE__)
         #define CONTEXT_PC uc_mcontext->__ss.__rip
-    #elif defined(__FreeBSD__)
+    #elif defined(__FreeBSD__) || defined(__DragonFly__)
         #define CONTEXT_PC uc_mcontext.mc_rip
     #elif defined(__NetBSD__)
         #define CONTEXT_PC uc_mcontext.__gregs[_REG_RIP]
