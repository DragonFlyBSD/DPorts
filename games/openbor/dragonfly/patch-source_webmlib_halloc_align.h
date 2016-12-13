FreeBSD has pruned previous patch after adding in <stddef.h> the:
__CLANG_MAX_ALIGN_T_DEFINED and _GCC_MAX_ALIGN_T defines.
We don't do such very compiler specific stuff in our headers so if user
specified either -std=c11 or -std=c++11 or newer (don't try -std=c11 on clang)
assume that max_align_t is available as per standards.
It is better than 'echo "" > source/webmlib/halloc/align.h' (arch-linux aur).

--- source/webmlib/halloc/align.h.orig	2016-11-10 19:53:54.000000000 +0200
+++ source/webmlib/halloc/align.h
@@ -22,6 +22,9 @@
  */
 typedef double max_align_t;
 
+#elif __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
+/* Do nothing */
+
 #elif !defined(__CLANG_MAX_ALIGN_T_DEFINED) && !defined(_GCC_MAX_ALIGN_T)
 
 /*
