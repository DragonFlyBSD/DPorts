--- hw/xfree86/drivers/modesetting/driver.c.orig	2025-06-10 06:55:30 UTC
+++ hw/xfree86/drivers/modesetting/driver.c
@@ -925,7 +925,7 @@ try_enable_glamor(ScrnInfoPtr pScrn)
     modesettingPtr ms = modesettingPTR(pScrn);
     const char *accel_method_str = xf86GetOptValString(ms->drmmode.Options,
                                                        OPTION_ACCEL_METHOD);
-    Bool do_glamor = (!accel_method_str ||
+    Bool do_glamor = (accel_method_str &&
                       strcmp(accel_method_str, "glamor") == 0);
 
     ms->drmmode.glamor = FALSE;
