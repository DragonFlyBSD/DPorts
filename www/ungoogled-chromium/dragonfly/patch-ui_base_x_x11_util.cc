diff --git ui/base/x/x11_util.cc ui/base/x/x11_util.cc
index 2e02be4ee245..4c41280b6384 100644
--- ui/base/x/x11_util.cc
+++ ui/base/x/x11_util.cc
@@ -48,7 +48,7 @@
 #include "ui/gfx/x/shm.h"
 #include "ui/gfx/x/xproto.h"
 
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <sys/sysctl.h>
 #include <sys/types.h>
 #endif
