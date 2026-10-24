diff --git components/sync/base/sync_util.cc components/sync/base/sync_util.cc
index 183add7414ad..fdefd84fa0cd 100644
--- components/sync/base/sync_util.cc
+++ components/sync/base/sync_util.cc
@@ -44,6 +44,8 @@ std::string GetSystemString() {
   system = "FREEBSD ";
 #elif BUILDFLAG(IS_OPENBSD)
   system = "OPENBSD ";
+#elif BUILDFLAG(IS_DRAGONFLY)
+  system = "DRAGONFLY ";
 #elif BUILDFLAG(IS_MAC)
   system = "MAC ";
 #endif
