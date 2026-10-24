--- tnsuplu.h.orig	2026-07-14 18:15:00 UTC
+++ tnsuplu.h
@@ -2,6 +2,12 @@
 #define SUPERLU_USE 0
 #define SUPERLU_MT_USE 0
 #define SUPERLU_DIST_USE 0
+/* enums were changed for SuperLU v2 */
+#define _D SLU_D
+#define DN SLU_DN
+#define GE SLU_GE
+#define NC SLU_NC
+
 /* don't change the next lines */
 #if SUPERLU_USE+SUPERLU_MT_USE+SUPERLU_DIST_USE > 1
  ERROR___  just pick one 
