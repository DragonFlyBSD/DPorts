--- third_party/crashpad/crashpad/minidump/minidump_misc_info_writer.cc.orig
+++ third_party/crashpad/crashpad/minidump/minidump_misc_info_writer.cc
@@ -163,6 +163,8 @@ std::string MinidumpMiscInfoDebugBuildString() {
   static constexpr char kOS[] = "openbsd";
 #elif defined(OS_FREEBSD)
   static constexpr char kOS[] = "freebsd";
+#elif defined(OS_DRAGONFLY)
+  static constexpr char kOS[] = "dragonfly";
 #else
 #error define kOS for this operating system
 #endif
