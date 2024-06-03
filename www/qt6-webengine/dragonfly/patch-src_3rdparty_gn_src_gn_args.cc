diff --git src/3rdparty/gn/src/gn/args.cc src/3rdparty/gn/src/gn/args.cc
index fbc0ee4a44b..054acac36b2 100644
--- src/3rdparty/gn/src/gn/args.cc
+++ src/3rdparty/gn/src/gn/args.cc
@@ -310,6 +310,8 @@ void Args::SetSystemVarsLocked(Scope* dest) const {
   os = "mac";
 #elif defined(OS_LINUX)
   os = "linux";
+#elif defined(OS_DRAGONFLY)
+  os = "dragonfly";
 #elif defined(OS_FREEBSD)
   os = "freebsd";
 #elif defined(OS_AIX)
