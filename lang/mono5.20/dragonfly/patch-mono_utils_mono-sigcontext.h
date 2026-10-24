--- mono/utils/mono-sigcontext.h.intermediate	2026-09-13 02:31:00 UTC
+++ mono/utils/mono-sigcontext.h
@@ -203,7 +203,7 @@ typedef struct ucontext {
 	#define UCONTEXT_REG_XMM13(ctx) (((ucontext_t*)(ctx))->uc_mcontext->__fs.__fpu_xmm13)
 	#define UCONTEXT_REG_XMM14(ctx) (((ucontext_t*)(ctx))->uc_mcontext->__fs.__fpu_xmm14)
 	#define UCONTEXT_REG_XMM15(ctx) (((ucontext_t*)(ctx))->uc_mcontext->__fs.__fpu_xmm15)
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 	#define UCONTEXT_REG_RAX(ctx) (((ucontext_t*)(ctx))->uc_mcontext.mc_rax)
 	#define UCONTEXT_REG_RBX(ctx) (((ucontext_t*)(ctx))->uc_mcontext.mc_rbx)
 	#define UCONTEXT_REG_RCX(ctx) (((ucontext_t*)(ctx))->uc_mcontext.mc_rcx)
