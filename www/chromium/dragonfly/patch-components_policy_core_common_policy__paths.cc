diff --git components/policy/core/common/policy_paths.cc components/policy/core/common/policy_paths.cc
index 2afbdd5d3fb8..0eaf76aeee6e 100644
--- components/policy/core/common/policy_paths.cc
+++ components/policy/core/common/policy_paths.cc
@@ -17,7 +17,7 @@ namespace policy {
 const char kPolicyPath[] = "/etc/opt/chrome/policies";
 #elif BUILDFLAG(GOOGLE_CHROME_FOR_TESTING_BRANDING)
 const char kPolicyPath[] = "/etc/opt/chrome_for_testing/policies";
-#elif BUILDFLAG(IS_FREEBSD)
+#elif BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 const char kPolicyPath[] = "/usr/local/etc/chromium/policies";
 #else
 const char kPolicyPath[] = "/etc/chromium/policies";
