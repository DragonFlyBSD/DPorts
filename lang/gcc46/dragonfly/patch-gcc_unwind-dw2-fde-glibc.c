--- gcc/unwind-dw2-fde-glibc.c.orig	2010-12-23 12:08:21.000000000 +0000
+++ gcc/unwind-dw2-fde-glibc.c
@@ -53,11 +53,19 @@
 #endif
 
 #if !defined(inhibit_libc) && defined(HAVE_LD_EH_FRAME_HDR) \
-    && defined(__FreeBSD__) && __FreeBSD__ >= 7
+    && defined(TARGET_DL_ITERATE_PHDR) \
+    && (defined(__FreeBSD__) || defined(__DragonFly__))
 # define ElfW __ElfN
 # define USE_PT_GNU_EH_FRAME
 #endif
 
+#if !defined(inhibit_libc) && defined(HAVE_LD_EH_FRAME_HDR) \
+    && defined(TARGET_DL_ITERATE_PHDR) \
+    && (defined(__OpenBSD__) || defined(__NetBSD__))
+# define ElfW(n) Elf_##n
+# define USE_PT_GNU_EH_FRAME
+#endif
+
 #if !defined(inhibit_libc) && defined(HAVE_LD_EH_FRAME_HDR) \
     && defined(TARGET_DL_ITERATE_PHDR) \
     && defined(__sun__) && defined(__svr4__)
