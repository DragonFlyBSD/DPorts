--- lib/intel-ipsec-mb.h.orig	2023-08-14 15:09:38.381071000 +0200
+++ lib/intel-ipsec-mb.h	2023-08-14 15:10:09.401615000 +0200
@@ -45,7 +45,7 @@ typedef struct {
 /**
  * Macros for aligning data structures and function inlines
  */
-#if defined __linux__ || defined __FreeBSD__
+#if defined __linux__ || defined __FreeBSD__ || defined __DragonFly__
 /**< Linux/FreeBSD */
 #define DECLARE_ALIGNED(decl, alignval) \
         decl __attribute__((aligned(alignval)))
