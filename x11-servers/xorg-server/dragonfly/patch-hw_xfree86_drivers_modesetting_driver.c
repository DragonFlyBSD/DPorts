--- hw/xfree86/drivers/modesetting/driver.c.orig	2020-01-13 22:57:05 UTC
+++ hw/xfree86/drivers/modesetting/driver.c
@@ -749,8 +749,7 @@ try_enable_glamor(ScrnInfoPtr pScrn)
     modesettingPtr ms = modesettingPTR(pScrn);
     const char *accel_method_str = xf86GetOptValString(ms->drmmode.Options,
                                                        OPTION_ACCEL_METHOD);
-    Bool do_glamor = (!accel_method_str ||
-                      strcmp(accel_method_str, "glamor") == 0);
+    Bool do_glamor = FALSE;
 
     ms->drmmode.glamor = FALSE;
 
