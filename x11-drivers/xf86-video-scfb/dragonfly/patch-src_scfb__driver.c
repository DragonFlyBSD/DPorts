Bailout if in VESA mode to continue to VESA probe (provided by swildner).

--- src/scfb_driver.c.intermediate	2020-03-14 13:21:06.000000000 +0000
+++ src/scfb_driver.c
@@ -322,7 +322,8 @@ ScfbProbe(DriverPtr drv, int flags)
 		ScrnInfoPtr pScrn = NULL;
 		dev = xf86FindOptionValue(devSections[i]->options, "device");
 		if ((fd = xf86Info.consoleFd) >= 0 &&
-		    ioctl(fd, FBIOGTYPE, &fb) != -1) {
+		    ioctl(fd, FBIOGTYPE, &fb) != -1 &&
+		    fb.fb_type == FBTYPE_DUMBFB) {
 			entity = xf86ClaimFbSlot(drv, 0, devSections[i], TRUE);
 			pScrn = xf86ConfigFbEntity(NULL,0,entity,
 						   NULL,NULL,NULL,NULL);
