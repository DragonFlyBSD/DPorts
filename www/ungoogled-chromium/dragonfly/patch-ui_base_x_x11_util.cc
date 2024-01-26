diff --git ui/base/x/x11_util.cc ui/base/x/x11_util.cc
index 8743c881033..81e88e50939 100644
--- ui/base/x/x11_util.cc
+++ ui/base/x/x11_util.cc
@@ -51,7 +51,7 @@
 #include "ui/gfx/x/xproto.h"
 #include "ui/gfx/x/xproto_util.h"
 
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <sys/sysctl.h>
 #include <sys/types.h>
 #endif
