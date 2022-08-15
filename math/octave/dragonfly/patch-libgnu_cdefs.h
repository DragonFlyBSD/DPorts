--- libgnu/cdefs.h.orig	2022-04-06 14:05:12 UTC
+++ libgnu/cdefs.h
@@ -380,7 +380,7 @@
    collision with a different __nonnull in DragonFlyBSD 5.9.  */
 #ifndef __attribute_nonnull__
 # if __GNUC_PREREQ (3,3) || __glibc_has_attribute (__nonnull__)
-#  define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
+#  define __attribute_nonnull__(params) __attribute__ ((__nonnull__ (params)))
 # else
 #  define __attribute_nonnull__(params)
 # endif
