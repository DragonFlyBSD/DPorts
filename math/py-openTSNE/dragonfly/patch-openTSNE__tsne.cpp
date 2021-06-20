--- openTSNE/_tsne.cpp.orig	2021-06-16 14:56:13.962272000 +0200
+++ openTSNE/_tsne.cpp	2021-06-16 14:57:00.801202000 +0200
@@ -3382,7 +3382,7 @@
  *                         tau[i, h] *= 2
  *                     else:
  */
-                                  __pyx_t_10 = (isinf(__pyx_v_max_tau) != 0);
+                                  __pyx_t_10 = (std::isinf(__pyx_v_max_tau) != 0);
                                   if (__pyx_t_10) {
 
                                     /* "openTSNE/_tsne.pyx":79
@@ -3451,7 +3451,7 @@
  *                         tau[i, h] /= 2
  *                     else:
  */
-                                  __pyx_t_10 = (isinf(__pyx_v_min_tau) != 0);
+                                  __pyx_t_10 = (std::isinf(__pyx_v_min_tau) != 0);
                                   if (__pyx_t_10) {
 
                                     /* "openTSNE/_tsne.pyx":85
