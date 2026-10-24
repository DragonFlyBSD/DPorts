From 0d7b26b169761d63198c4700764d08224137d99c Mon Sep 17 00:00:00 2001
From: Alexandre Julliard <julliard@winehq.org>
Date: Wed, 5 Nov 2025 17:06:48 +0100
Subject: [PATCH] ntdll: Treat FPU_sig and FPUX_sig as void* on i386.

Similar to d320a992cf881d0bf62347a28631713cff9e6844.

--- dlls/ntdll/unix/signal_i386.c.orig	2026-01-19 21:07:17 UTC
+++ dlls/ntdll/unix/signal_i386.c
@@ -149,9 +149,9 @@ typedef struct ucontext
 #define TRAP_sig(context)    ((context)->uc_mcontext.gregs[REG_TRAPNO])
 #define ERROR_sig(context)   ((context)->uc_mcontext.gregs[REG_ERR])
 
-#define FPU_sig(context)     ((FLOATING_SAVE_AREA*)((context)->uc_mcontext.fpregs))
-#define FPUX_sig(context)    (FPU_sig(context) && !((context)->uc_mcontext.fpregs->status >> 16) ? (XSAVE_FORMAT *)(FPU_sig(context) + 1) : NULL)
-#define XState_sig(fpu)      (((unsigned int *)fpu->Reserved4)[12] == FP_XSTATE_MAGIC1 ? (XSAVE_AREA_HEADER *)(fpu + 1) : NULL)
+#define FPU_sig(context)     ((void *)(context)->uc_mcontext.fpregs)
+#define FPUX_sig(context)    (FPU_sig(context) && !((context)->uc_mcontext.fpregs->status >> 16) ? (void *)((FLOATING_SAVE_AREA *)FPU_sig(context) + 1) : NULL)
+#define XState_sig(fpu)      (((unsigned int *)((XSAVE_FORMAT *)(fpu))->Reserved4)[12] == FP_XSTATE_MAGIC1 ? (XSAVE_AREA_HEADER *)((XSAVE_FORMAT *)(fpu) + 1) : NULL)
 
 #ifdef __ANDROID__
 /* custom signal restorer since we may have unmapped the one in vdso, and bionic doesn't check for that */
@@ -317,7 +317,7 @@ static inline int set_thread_area( struct modify_ldt_s
 #define TRAP_sig(context)    ((context)->uc_mcontext->__es.__trapno)
 #define ERROR_sig(context)   ((context)->uc_mcontext->__es.__err)
 #define FPU_sig(context)     NULL
-#define FPUX_sig(context)    ((XSAVE_FORMAT *)&(context)->uc_mcontext->__fs.__fpu_fcw)
+#define FPUX_sig(context)    ((void *)&(context)->uc_mcontext->__fs.__fpu_fcw)
 #define XState_sig(context)  NULL  /* FIXME */
 
 #elif defined(__NetBSD__)
@@ -347,7 +347,7 @@ static inline int set_thread_area( struct modify_ldt_s
 #define ERROR_sig(context)     ((context)->uc_mcontext.__gregs[_REG_ERR])
 
 #define FPU_sig(context)     NULL
-#define FPUX_sig(context)    ((XSAVE_FORMAT *)&((context)->uc_mcontext.__fpregs))
+#define FPUX_sig(context)    ((void *)&((context)->uc_mcontext.__fpregs))
 #define XState_sig(context)  NULL  /* FIXME */
 
 #define T_MCHK T_MCA
@@ -797,7 +797,7 @@ static inline void save_context( struct xcontext *xcon
 static inline void save_context( struct xcontext *xcontext, const ucontext_t *sigcontext )
 {
     FLOATING_SAVE_AREA *fpu = FPU_sig(sigcontext);
-    XSAVE_FORMAT *fpux = FPUX_sig(sigcontext);
+    void *fpux = FPUX_sig(sigcontext);
     CONTEXT *context = &xcontext->c;
 
     memset(context, 0, sizeof(*context));
@@ -835,7 +835,7 @@ static inline void save_context( struct xcontext *xcon
         XSAVE_AREA_HEADER *xs;
 
         context->ContextFlags |= CONTEXT_FLOATING_POINT | CONTEXT_EXTENDED_REGISTERS;
-        memcpy( context->ExtendedRegisters, fpux, sizeof(*fpux) );
+        memcpy( context->ExtendedRegisters, fpux, sizeof(context->ExtendedRegisters) );
         if (!fpu) fpux_to_fpu( &context->FloatSave, fpux );
         if (xstate_extended_features() && (xs = XState_sig(fpux))) context_init_xstate( context, xs );
     }
@@ -854,23 +854,25 @@ static void fixup_frame_fpu_state( struct syscall_fram
  */
 static void fixup_frame_fpu_state( struct syscall_frame *frame, const ucontext_t *sigcontext )
 {
+    I386_FLOATING_SAVE_AREA fsave_buf, *fsave = FPU_sig(sigcontext);
+    void *fpux = FPUX_sig(sigcontext);
+
     memset( &frame->xstate, 0, sizeof(frame->xstate) );
     if (user_shared_data->XState.CompactionEnabled)
         frame->xstate.CompactionMask = 0x8000000000000000 | user_shared_data->XState.EnabledFeatures;
-    if (FPUX_sig(sigcontext))
+    if (fpux)
     {
-        if (user_shared_data->ProcessorFeatures[PF_XMMI_INSTRUCTIONS_AVAILABLE])
-            frame->u.xsave = *FPUX_sig(sigcontext);
-        else
-            fpux_to_fpu( &frame->u.fsave, FPUX_sig(sigcontext) );
+        memcpy( &frame->u.xsave, fpux, sizeof(frame->u.xsave) );
+        if (!user_shared_data->ProcessorFeatures[PF_XMMI_INSTRUCTIONS_AVAILABLE])
+        {
+            fpux_to_fpu( &fsave_buf, &frame->u.xsave );
+            frame->u.fsave = fsave_buf;
+        }
         frame->xstate.Mask = XSTATE_MASK_LEGACY;
     }
     else
     {
-        I386_FLOATING_SAVE_AREA *fsave, fsave_buf;
-
-        if (FPU_sig(sigcontext)) fsave = FPU_sig(sigcontext);
-        else
+        if (!fsave)
         {
             save_fpu( &fsave_buf );
             fsave = &fsave_buf;
@@ -902,7 +904,7 @@ static inline void restore_context( const struct xcont
 static inline void restore_context( const struct xcontext *xcontext, ucontext_t *sigcontext )
 {
     FLOATING_SAVE_AREA *fpu = FPU_sig(sigcontext);
-    XSAVE_FORMAT *fpux = FPUX_sig(sigcontext);
+    void *fpux = FPUX_sig(sigcontext);
     const CONTEXT *context = &xcontext->c;
 
     x86_thread_data()->dr0 = context->Dr0;
@@ -929,7 +931,7 @@ static inline void restore_context( const struct xcont
     SS_sig(sigcontext)  = context->SegSs;
 
     if (fpu) *fpu = context->FloatSave;
-    if (fpux) memcpy( fpux, context->ExtendedRegisters, sizeof(*fpux) );
+    if (fpux) memcpy( fpux, context->ExtendedRegisters, sizeof(context->ExtendedRegisters) );
     if (!fpu && !fpux) restore_fpu( context );
 }
 
