--- src/utils/memsize.c.orig	2018-10-26 22:27:03 UTC
+++ src/utils/memsize.c
@@ -204,7 +204,11 @@ double mem_size(void) {
   len = sizeof(kp);
   if (sysctl(mib, 4, &kp, &len, NULL, 0) == 0) {
     assert(len == sizeof(kp));
+#ifdef __DragonFly__
+    vsize = kp.kp_vm_map_size;
+#else
     vsize = kp.ki_size;
+#endif
   }
 
   return vsize;
