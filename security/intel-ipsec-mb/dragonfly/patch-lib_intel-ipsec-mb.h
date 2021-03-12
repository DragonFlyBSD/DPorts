--- lib/intel-ipsec-mb.h.orig	2020-10-21 22:25:42 UTC
+++ lib/intel-ipsec-mb.h
@@ -45,7 +45,7 @@ typedef struct {
 /*
  * Macros for aligning data structures and function inlines
  */
-#if defined __linux__ || defined __FreeBSD__
+#if defined __linux__ || defined __FreeBSD__ || defined __DragonFly__
 /* Linux/FreeBSD */
 #define DECLARE_ALIGNED(decl, alignval) \
         decl __attribute__((aligned(alignval)))
