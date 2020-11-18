From ftigeot branch

--- src/mesa/drivers/dri/i965/brw_bufmgr.c.orig	2020-09-28 22:52:12 UTC
+++ src/mesa/drivers/dri/i965/brw_bufmgr.c
@@ -1887,7 +1887,7 @@ brw_bufmgr_create(struct gen_device_info
       bufmgr->initial_kflags |= EXEC_OBJECT_SUPPORTS_48B_ADDRESS;
 
       /* Allocate VMA in userspace if we have softpin and full PPGTT. */
-      if (gem_param(fd, I915_PARAM_HAS_EXEC_SOFTPIN) > 0 &&
+      if (false && gem_param(fd, I915_PARAM_HAS_EXEC_SOFTPIN) > 0 &&
           gem_param(fd, I915_PARAM_HAS_ALIASING_PPGTT) > 1) {
          bufmgr->initial_kflags |= EXEC_OBJECT_PINNED;
 
