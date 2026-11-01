diff --git tools/gn/src/gn/args.cc tools/gn/src/gn/args.cc
index c67f8bcc08e0..0cf8cd42bcbc 100644
--- tools/gn/src/gn/args.cc
+++ tools/gn/src/gn/args.cc
@@ -318,6 +318,8 @@ void Args::SetSystemVarsLocked(Scope* dest) const {
   os = "mac";
 #elif defined(OS_LINUX)
   os = "linux";
+#elif defined(OS_DRAGONFLY)
+  os = "dragonfly";
 #elif defined(OS_FREEBSD)
   os = "freebsd";
 #elif defined(OS_AIX)
