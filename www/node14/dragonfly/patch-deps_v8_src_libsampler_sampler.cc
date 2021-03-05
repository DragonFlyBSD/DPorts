--- deps/v8/src/libsampler/sampler.cc.intermediate	2021-03-05 13:40:41.000000000 +0000
+++ deps/v8/src/libsampler/sampler.cc
@@ -469,7 +469,7 @@ void SignalHandler::FillRegisterState(vo
   state->sp = reinterpret_cast<void*>(mcontext->__ss.__esp);
   state->fp = reinterpret_cast<void*>(mcontext->__ss.__ebp);
 #endif  // V8_HOST_ARCH_IA32
-#elif V8_OS_FREEBSD
+#elif V8_OS_FREEBSD || __DragonFly__
 #if V8_HOST_ARCH_IA32
   state->pc = reinterpret_cast<void*>(mcontext.mc_eip);
   state->sp = reinterpret_cast<void*>(mcontext.mc_esp);
