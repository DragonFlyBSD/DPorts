diff --git ui/base/x/x11_util.cc ui/base/x/x11_util.cc
index c48000bcf46..0da115cb3a6 100644
--- src/3rdparty/chromium/ui/base/x/x11_util.cc
+++ src/3rdparty/chromium/ui/base/x/x11_util.cc
@@ -53,7 +53,7 @@
 #include "ui/gfx/x/xproto.h"
 #include "ui/gfx/x/xproto_util.h"
 
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <sys/sysctl.h>
 #include <sys/types.h>
 #endif
