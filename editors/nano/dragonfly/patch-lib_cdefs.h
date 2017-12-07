--- lib/cdefs.h.orig	2017-11-27 18:12:23 UTC
+++ lib/cdefs.h
@@ -285,7 +285,7 @@
 /* The nonull function attribute allows to mark pointer parameters which
    must not be NULL.  */
 #if __GNUC_PREREQ (3,3)
-# define __nonnull(params) __attribute__ ((__nonnull__ params))
+# define __nonnull(params) __attribute__ ((__nonnull__(params)))
 #else
 # define __nonnull(params)
 #endif
