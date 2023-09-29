diff --git tools/gn/src/gn/args.cc tools/gn/src/gn/args.cc
index 6b5d25f36c9..dc6b93c8ecb 100644
--- tools/gn/src/gn/args.cc
+++ tools/gn/src/gn/args.cc
@@ -316,6 +316,8 @@ void Args::SetSystemVarsLocked(Scope* dest) const {
   os = "mac";
 #elif defined(OS_LINUX)
   os = "linux";
+#elif defined(OS_DRAGONFLY)
+  os = "dragonfly";
 #elif defined(OS_FREEBSD)
   os = "freebsd";
 #elif defined(OS_AIX)
