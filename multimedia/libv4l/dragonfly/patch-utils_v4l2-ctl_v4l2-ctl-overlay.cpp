--- utils/v4l2-ctl/v4l2-ctl-overlay.cpp.orig	2020-08-16 06:52:15 UTC
+++ utils/v4l2-ctl/v4l2-ctl-overlay.cpp
@@ -16,7 +16,7 @@
 
 #include "v4l2-ctl.h"
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <linux/fb.h>
 #include <vector>
 
