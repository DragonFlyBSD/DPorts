--- tools/gn/src/gn/args.cc.orig
+++ tools/gn/src/gn/args.cc
@@ -344,6 +344,8 @@
   return "mac";
 #elif defined(OS_LINUX)
   return "linux";
+#elif defined(OS_DRAGONFLY)
+  return "dragonfly";
 #elif defined(OS_FREEBSD)
   return "freebsd";
 #elif defined(OS_AIX)
