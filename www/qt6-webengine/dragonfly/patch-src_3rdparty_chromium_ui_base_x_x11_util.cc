--- src/3rdparty/chromium/ui/base/x/x11_util.cc.orig	2026-10-23 12:00:00 UTC
+++ src/3rdparty/chromium/ui/base/x/x11_util.cc
@@ -53,7 +53,7 @@
 #include "ui/gfx/x/shm.h"
 #include "ui/gfx/x/xproto.h"
 
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <sys/sysctl.h>
 #include <sys/types.h>
 #endif
