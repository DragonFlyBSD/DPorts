--- libgnu/cdefs.h.orig	2021-06-10 13:38:23.312658000 +0200
+++ libgnu/cdefs.h	2021-06-10 13:38:56.111909000 +0200
@@ -321,7 +321,7 @@
    for portability when this file is used in Gnulib.  */
 #ifndef __nonnull
 # if __GNUC_PREREQ (3,3) || __glibc_clang_has_attribute (__nonnull__)
-#  define __nonnull(params) __attribute__ ((__nonnull__ params))
+#  define __nonnull(params) __attribute__ ((__nonnull__ (params)))
 # else
 #  define __nonnull(params)
 # endif
