--- util/coroutine-ucontext.c.orig	2024-06-10 18:35:25 UTC
+++ util/coroutine-ucontext.c
@@ -159,8 +159,17 @@ static void coroutine_trampoline(int i0,
     self = arg.p;
     co = &self->base;
 
+    /* Save signal mask in this sigsetjmp, because makecontext on DragonFly
+     * leaves all signals blocked when entering the new context with
+     * swapcontext.
+     * Workaround this, by just having the signal mask restored by the
+     * siglongjmp that brings us back from qemu_coroutine_new().
+     * XXX Remove this workaround when the makecontext behaviour is fixed
+     *     on DragonFly.
+     */
+
     /* Initialize longjmp environment and switch back the caller */
-    if (!sigsetjmp(self->env, 0)) {
+    if (!sigsetjmp(self->env, 1)) {
         CoroutineUContext *leaderp = get_ptr_leader();
 
         start_switch_fiber_asan(&fake_stack_save,
