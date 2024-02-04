diff --git components/policy/core/common/policy_paths.cc components/policy/core/common/policy_paths.cc
index fc8faac0150..248e031b7c8 100644
--- components/policy/core/common/policy_paths.cc
+++ components/policy/core/common/policy_paths.cc
@@ -16,7 +16,7 @@ namespace policy {
 #if BUILDFLAG(GOOGLE_CHROME_BRANDING) || \
     BUILDFLAG(GOOGLE_CHROME_FOR_TESTING_BRANDING)
 const char kPolicyPath[] = "/etc/opt/chrome/policies";
-#elif BUILDFLAG(IS_FREEBSD)
+#elif BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 const char kPolicyPath[] = "/usr/local/etc/chromium/policies";
 #else
 const char kPolicyPath[] = "/etc/chromium/policies";
