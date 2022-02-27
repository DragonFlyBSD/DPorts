--- lib/cdefs.h.orig	2021-03-27 18:03:11 UTC
+++ lib/cdefs.h
@@ -327,7 +327,7 @@
 # else
 #  define __nonnull(params)
 # endif
-#elif !defined __GLIBC__
+#elif !defined __GLIBC__ && !defined __DragonFly__
 # undef __nonnull
 # define __nonnull(params) _GL_ATTRIBUTE_NONNULL (params)
 #endif
