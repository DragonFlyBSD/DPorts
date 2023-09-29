diff --git v8/src/libsampler/sampler.cc v8/src/libsampler/sampler.cc
index acb9db8e17c..bae62877466 100644
--- v8/src/libsampler/sampler.cc
+++ v8/src/libsampler/sampler.cc
@@ -500,7 +500,7 @@ void SignalHandler::FillRegisterState(void* context, RegisterState* state) {
   state->fp =
       reinterpret_cast<void*>(arm_thread_state64_get_fp(mcontext->__ss));
 #endif  // V8_HOST_ARCH_*
-#elif V8_OS_FREEBSD
+#elif V8_OS_FREEBSD || V8_OS_DRAGONFLYBSD
 #if V8_HOST_ARCH_IA32
   state->pc = reinterpret_cast<void*>(mcontext.mc_eip);
   state->sp = reinterpret_cast<void*>(mcontext.mc_esp);
