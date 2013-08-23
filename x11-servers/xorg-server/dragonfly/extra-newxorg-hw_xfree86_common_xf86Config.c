--- hw/xfree86/common/xf86Config.c.orig	2012-08-02 00:38:18.000000000 +0000
+++ hw/xfree86/common/xf86Config.c
@@ -916,7 +916,7 @@ configServerFlags(XF86ConfFlagsPtr flags
     }
 #endif
 
-    xf86Info.aiglx = TRUE;
+    xf86Info.aiglx = FALSE;
     xf86Info.aiglxFrom = X_DEFAULT;
     if (xf86GetOptValBool(FlagOptions, FLAG_AIGLX, &value)) {
         xf86Info.aiglx = value;
