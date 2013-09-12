--- gcc/crtstuff.c.orig	2010-12-23 12:08:21.000000000 +0000
+++ gcc/crtstuff.c
@@ -79,11 +79,19 @@ call_ ## FUNC (void)					\
 }
 #endif
 
+#if defined(TARGET_DL_ITERATE_PHDR) && \
+   ( defined(__FreeBSD__)              \
+  || defined(__OpenBSD__)              \
+  || defined(__NetBSD__)               \
+  || defined(__DragonFly__))
+#define BSD_DL_ITERATE_PHDR_AVAILABLE
+#endif
+
 #if defined(OBJECT_FORMAT_ELF) \
     && !defined(OBJECT_FORMAT_FLAT) \
     && defined(HAVE_LD_EH_FRAME_HDR) \
     && !defined(inhibit_libc) && !defined(CRTSTUFFT_O) \
-    && defined(__FreeBSD__) && __FreeBSD__ >= 7
+    && defined(BSD_DL_ITERATE_PHDR_AVAILABLE)
 #include <link.h>
 # define USE_PT_GNU_EH_FRAME
 #endif
