--- hw/ppc/mac_oldworld.c.orig	2015-04-27 14:08:24 UTC
+++ hw/ppc/mac_oldworld.c
@@ -49,6 +49,11 @@
 #define CLOCKFREQ 266000000UL
 #define BUSFREQ 66000000UL
 
+/* FreeBSD headers define this */
+#ifdef round_page
+#undef round_page
+#endif
+
 static void fw_cfg_boot_set(void *opaque, const char *boot_device,
                             Error **errp)
 {
