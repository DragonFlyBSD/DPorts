--- tools/gn/args.cc.orig	2019-02-12 17:36:05 UTC
+++ tools/gn/args.cc
@@ -294,7 +294,7 @@ void Args::SetSystemVarsLocked(Scope* de
   os = "mac";
 #elif defined(OS_LINUX)
   os = "linux";
-#elif defined(OS_FREEBSD)
+#elif defined(OS_FREEBSD) || defined(OS_DRAGONFLY)
   os = "freebsd";
 #elif defined(OS_AIX)
   os = "aix";
