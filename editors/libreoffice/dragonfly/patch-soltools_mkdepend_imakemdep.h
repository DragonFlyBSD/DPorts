--- soltools/mkdepend/imakemdep.h.orig	2021-09-08 17:53:20 UTC
+++ soltools/mkdepend/imakemdep.h
@@ -212,9 +212,12 @@ in this Software without prior written a
 #ifdef _CRAY
 #define DEFAULT_CPP "/lib/pcpp"
 #endif
-#if defined(__NetBSD__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
+#if defined(__NetBSD__) || defined(__FreeBSD__) || defined(__OpenBSD__)
 #define DEFAULT_CPP "/usr/libexec/cpp"
 #endif
+#ifdef __DragonFly__
+#define DEFAULT_CPP "/usr/bin/cpp"
+#endif
 #ifdef  MACH
 #define USE_CC_E
 #endif
@@ -251,7 +254,7 @@ char *cpp_argv[ARGUMENTS] = {
     "-Uunix",   /* remove unix symbol so that filename unix.c okay */
 #endif
 #if defined(__NetBSD__) || defined(__FreeBSD__) || defined(__OpenBSD__) || \
-    defined(MACH) || defined(DRAGONFLY)
+    defined(MACH) || defined(__DragonFly__)
 /* FIXME: strange list of obsolete systems */
 # ifdef __i386__
     "-D__i386__",
