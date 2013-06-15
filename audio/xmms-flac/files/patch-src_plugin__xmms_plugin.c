
$FreeBSD: audio/xmms-flac/files/patch-src_plugin__xmms_plugin.c 320405 2013-06-09 19:30:58Z naddy $

--- src/plugin_xmms/plugin.c.orig
+++ src/plugin_xmms/plugin.c
@@ -140,7 +140,7 @@
 static unsigned bitrate_history_[BITRATE_HIST_SIZE];
 
 
-InputPlugin *get_iplugin_info(void)
+FLAC_API InputPlugin *get_iplugin_info(void)
 {
 	flac_ip.description = g_strdup_printf("Reference FLAC Player v%s", FLAC__VERSION_STRING);
 	return &flac_ip;
