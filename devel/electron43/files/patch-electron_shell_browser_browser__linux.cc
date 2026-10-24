--- electron/shell/browser/browser_linux.cc.orig	2026-06-29 20:35:15 UTC
+++ electron/shell/browser/browser_linux.cc
@@ -9,7 +9,7 @@
 
 #include <string_view>
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include <gio/gdesktopappinfo.h>
 #include <gio/gio.h>
 #include <gtk/gtk.h>
@@ -37,7 +37,7 @@
 #include "ui/gtk/gtk_compat.h"  // nogncheck
 #include "ui/gtk/gtk_util.h"    // nogncheck
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "shell/browser/linux/unity_service.h"
 #endif
 
