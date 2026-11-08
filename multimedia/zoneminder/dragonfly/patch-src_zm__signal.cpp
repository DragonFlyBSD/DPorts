--- src/zm_signal.cpp.orig
+++ src/zm_signal.cpp
@@ -118,7 +118,7 @@
 #if defined(__x86_64__)
 #if defined(__APPLE__)
     ip = (void *)(uc->uc_mcontext->__ss.__rip);
-#elif defined(__FreeBSD_kernel__) || defined(__FreeBSD__)
+#elif defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__DragonFly__)
     ip = (void *)(uc->uc_mcontext.mc_rip);
 #elif defined(__OpenBSD__)
     ip = (void *)(uc->sc_rip);
