diff --git components/policy/core/common/cloud/cloud_policy_util.cc components/policy/core/common/cloud/cloud_policy_util.cc
index 6c59e0c41a1d..2cfa4b52d4b8 100644
--- components/policy/core/common/cloud/cloud_policy_util.cc
+++ components/policy/core/common/cloud/cloud_policy_util.cc
@@ -39,7 +39,7 @@
 #include <limits.h>  // For HOST_NAME_MAX
 #endif
 
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <sys/param.h>
 #define HOST_NAME_MAX MAXHOSTNAMELEN
 #endif
