diff --git ui/base/x/x11_util.cc ui/base/x/x11_util.cc
index 04a51c1eb335..0a19f0f85c48 100644
--- ui/base/x/x11_util.cc
+++ ui/base/x/x11_util.cc
@@ -53,7 +53,7 @@
 #include "ui/gfx/x/shm.h"
 #include "ui/gfx/x/xproto.h"
 
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <sys/sysctl.h>
 #include <sys/types.h>
 #endif
