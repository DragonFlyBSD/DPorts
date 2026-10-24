--- oss/ctl_oss.c.orig
+++ oss/ctl_oss.c
@@ -418,7 +418,7 @@
 
 	oss->ext.version = SND_CTL_EXT_VERSION;
 	oss->ext.card_idx = 0; /* FIXME */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	strncpy(oss->ext.id, "fbsd", sizeof(oss->ext.id) - 1);
 	strcpy(oss->ext.driver, "FreeBSD/OSS plugin");
 	strncpy(oss->ext.name, "FreeBSD/OSS", sizeof(oss->ext.name) - 1);
