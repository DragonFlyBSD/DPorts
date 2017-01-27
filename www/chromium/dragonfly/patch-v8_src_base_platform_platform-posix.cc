--- v8/src/base/platform/platform-posix.cc.intermediate	2017-01-26 12:12:40 UTC
+++ v8/src/base/platform/platform-posix.cc
@@ -27,6 +27,13 @@
 #include <sys/sysctl.h>  // NOLINT, for sysctl
 #endif
 
+#if V8_OS_DRAGONFLYBSD || defined(__DragonFly__)
+#include <sys/param.h>
+#if __DragonFly_version >= 400709
+#include <sys/lwp.h>
+#endif
+#endif
+
 #if V8_OS_NETBSD
 #include <lwp.h>       // for _lwp_self
 #endif
