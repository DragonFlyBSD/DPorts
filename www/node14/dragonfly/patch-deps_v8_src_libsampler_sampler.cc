--- deps/v8/src/libsampler/sampler.cc.orig	2021-07-26 22:44:32.199581000 +0200
+++ deps/v8/src/libsampler/sampler.cc	2021-07-26 22:45:01.614281000 +0200
@@ -476,7 +476,7 @@
   state->fp =
       reinterpret_cast<void*>(arm_thread_state64_get_fp(mcontext->__ss));
 #endif  // V8_HOST_ARCH_*
-#elif V8_OS_FREEBSD
+#elif V8_OS_FREEBSD || __DragonFly__
 #if V8_HOST_ARCH_IA32
   state->pc = reinterpret_cast<void*>(mcontext.mc_eip);
   state->sp = reinterpret_cast<void*>(mcontext.mc_esp);
