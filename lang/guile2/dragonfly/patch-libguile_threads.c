--- libguile/threads.c.orig	2016-12-15 02:03:33.000000000 +0200
+++ libguile/threads.c
@@ -2252,7 +2252,7 @@ scm_ia64_ar_bsp (const void *opaque)
   return (void *) ctx->uc_mcontext.sc_ar_bsp;
 }
 # endif /* linux */
-# ifdef __FreeBSD__
+# if defined __FreeBSD__ || defined __DragonFly__
 #  include <ucontext.h>
 void *
 scm_ia64_register_backing_store_base (void)
