diff --git components/version_info/version_info.cc components/version_info/version_info.cc
index c5b6a9ea17b..7fc6e5a226e 100644
--- src/3rdparty/chromium/components/version_info/version_info.cc
+++ src/3rdparty/chromium/components/version_info/version_info.cc
@@ -83,6 +83,8 @@ std::string GetOSType() {
   return "FreeBSD";
 #elif BUILDFLAG(IS_OPENBSD)
   return "OpenBSD";
+#elif BUILDFLAG(IS_DRAGONFLY)
+  return "DragonFly";
 #elif BUILDFLAG(IS_SOLARIS)
   return "Solaris";
 #elif BUILDFLAG(IS_FUCHSIA)
