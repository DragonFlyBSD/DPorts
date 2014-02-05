--- NickSpace.bproj/NickSpaceView.m.intermediate	2014-02-05 13:24:27.013687000 +0000
+++ NickSpace.bproj/NickSpaceView.m
@@ -1,6 +1,6 @@
 #import "NickSpaceView.h"
 #import <AppKit/AppKit.h>
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #import <values.h>
 #endif
 #import <time.h>
