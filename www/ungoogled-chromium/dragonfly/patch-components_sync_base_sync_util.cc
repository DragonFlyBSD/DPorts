diff --git components/sync/base/sync_util.cc components/sync/base/sync_util.cc
index e636023e3b1..7f0a5c78901 100644
--- components/sync/base/sync_util.cc
+++ components/sync/base/sync_util.cc
@@ -42,6 +42,8 @@ std::string GetSystemString() {
   system = "FREEBSD ";
 #elif BUILDFLAG(IS_OPENBSD)
   system = "OPENBSD ";
+#elif BUILDFLAG(IS_DRAGONFLY)
+  system = "DRAGONFLY ";
 #elif BUILDFLAG(IS_MAC)
   system = "MAC ";
 #endif
