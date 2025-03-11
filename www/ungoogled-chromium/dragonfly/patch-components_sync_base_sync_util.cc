diff --git components/sync/base/sync_util.cc components/sync/base/sync_util.cc
index 26839c5c3894..6ed703a01473 100644
--- components/sync/base/sync_util.cc
+++ components/sync/base/sync_util.cc
@@ -45,6 +45,8 @@ std::string GetSystemString() {
   system = "FREEBSD ";
 #elif BUILDFLAG(IS_OPENBSD)
   system = "OPENBSD ";
+#elif BUILDFLAG(IS_DRAGONFLY)
+  system = "DRAGONFLY ";
 #elif BUILDFLAG(IS_MAC)
   system = "MAC ";
 #endif
