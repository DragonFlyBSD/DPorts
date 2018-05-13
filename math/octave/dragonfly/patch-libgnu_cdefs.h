--- libgnu/cdefs.h	2018-04-30 20:03:56.000000000 +0300
+++ libgnu/cdefs.h
@@ -285,7 +285,7 @@
 /* The nonull function attribute allows to mark pointer parameters which
    must not be NULL.  */
 #if __GNUC_PREREQ (3,3)
-# define __nonnull(params) __attribute__ ((__nonnull__ params))
+# define __nonnull(params) __attribute__ ((__nonnull__ (params)))
 #else
 # define __nonnull(params)
 #endif
