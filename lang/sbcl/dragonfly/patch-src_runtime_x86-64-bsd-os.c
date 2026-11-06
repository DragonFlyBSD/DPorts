--- src/runtime/x86-64-bsd-os.c.orig	2026-09-26 13:30:06 UTC
+++ src/runtime/x86-64-bsd-os.c
@@ -148,6 +148,12 @@ os_restore_fp_control(os_context_t *context)
     /* same for x87 FPU. */
     asm ("fldcw %0" : : "m" (ex->en_cw));
 }
+
+os_context_register_t *
+os_context_float_register_addr(os_context_t *context, int offset)
+{
+    return (os_context_register_t *)&((union savefpu *)&context->uc_mcontext.mc_fpregs)->sv_xmm64.sv_xmm[offset];
+}
 #endif
 
 #if defined(LISP_FEATURE_FREEBSD)
