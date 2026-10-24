diff --git components/policy/core/common/cloud/cloud_policy_util.cc components/policy/core/common/cloud/cloud_policy_util.cc
index 2b5a9a1cdb1b..0ffbe78759e5 100644
--- components/policy/core/common/cloud/cloud_policy_util.cc
+++ components/policy/core/common/cloud/cloud_policy_util.cc
@@ -40,7 +40,7 @@
 #include <limits.h>  // For HOST_NAME_MAX
 #endif
 
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <sys/param.h>
 #define HOST_NAME_MAX MAXHOSTNAMELEN
 #endif
