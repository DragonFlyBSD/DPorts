--- src/generic_files/profiler.c.orig
+++ src/generic_files/profiler.c
@@ -183,7 +183,10 @@
     rsspeak *= 1024; /* given in kilobytes */
     if (sysctl(mib, 4, &kp, &len, NULL, 0) == -1)
         flint_throw(FLINT_ERROR, "report please\n");
-#  if defined(__FreeBSD__) || defined(__DragonFly__)
+#  if defined(__DragonFly__)
+    virt = kp.kp_vm_map_size;
+    rss = kp.kp_vm_rssize * getpagesize();
+#  elif defined(__FreeBSD__)
     virt = kp.ki_size;
     rss = kp.ki_rssize * getpagesize();
 #  elif defined(__NetBSD__)
