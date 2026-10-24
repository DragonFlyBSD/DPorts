--- src/gallium/drivers/zink/zink_batch.c.orig	2026-07-02 19:34:59 UTC
+++ src/gallium/drivers/zink/zink_batch.c
@@ -180,10 +180,46 @@ reset_batch_state_ctx(struct zink_context *ctx, struct zink_batch_state *bs)
    }
 }

+/*
+ * Ownership: the caller keeps owning the batch state; this only observes the
+ * embedded submit-queue fence.
+ * Lifetime: a batch state cannot be reused while zink's submit worker may
+ * still signal bs->flush_completed.
+ * Threading: non-blocking; callers on selection paths should skip busy states
+ * instead of waiting while holding list locks.
+ */
+static bool
+batch_state_submit_completed(struct zink_screen *screen, struct zink_batch_state *bs)
+{
+   bool completed = !screen->threaded_submit ||
+                    util_queue_fence_is_signalled(&bs->flush_completed);
+
+   if (!completed && unlikely(zink_debug & ZINK_DEBUG_SYNC))
+      debug_printf("zink: defer batch state reuse until submit worker completes (batch_id=%llu)\n",
+                   (unsigned long long)bs->fence.batch_id);
+
+   return completed;
+}
+
+/*
+ * Ownership: the caller keeps owning the batch state.
+ * Lifetime: waits until the submit queue no longer touches bs or its embedded
+ * flush_completed fence.
+ * Threading: may block; do not call while holding zink batch-state list locks.
+ */
+static void
+wait_batch_state_submit(struct zink_screen *screen, struct zink_batch_state *bs)
+{
+   if (screen->threaded_submit)
+      util_queue_fence_wait(&bs->flush_completed);
+}
+
 void
 zink_reset_batch_state(struct zink_context *ctx, struct zink_batch_state *bs)
 {
    struct zink_screen *screen = zink_screen(ctx->base.screen);
+
+   wait_batch_state_submit(screen, bs);
    reset_batch_state_ctx(ctx, bs);
    reset_batch_state_internal(screen, bs);
 }
@@ -229,6 +265,7 @@ zink_batch_state_destroy(struct zink_screen *screen, struct zink_batch_state *bs
    if (!bs)
       return;

+   wait_batch_state_submit(screen, bs);
    reset_batch_state_internal(screen, bs);

    util_queue_fence_destroy(&bs->flush_completed);
@@ -415,7 +452,8 @@ find_screen_state(struct zink_screen *screen, struct zink_context *ctx)
 {
    struct zink_batch_state *bs = NULL;
    simple_mtx_lock(&screen->free_batch_states_lock);
-   if (screen->free_batch_states) {
+   if (screen->free_batch_states &&
+       batch_state_submit_completed(screen, screen->free_batch_states)) {
       bs = screen->free_batch_states;
       bs->ctx = ctx;
       screen->free_batch_states = bs->next;
@@ -440,7 +478,8 @@ find_completed_batch_state(struct zink_context *ctx)
       /* only a submitted state can be reused */
       if (i->fence.submitted &&
           /* a submitted state must have completed before it can be reused */
-          (zink_screen_check_last_finished(screen, i->fence.batch_id) || i->fence.completed)) {
+          (zink_screen_check_last_finished(screen, i->fence.batch_id) || i->fence.completed) &&
+          batch_state_submit_completed(screen, i)) {
          pop_batch_state(ctx);
          reset_batch_state_ctx(ctx, i);
          if (ctx->flags & ZINK_CONTEXT_COPY_ONLY) {
