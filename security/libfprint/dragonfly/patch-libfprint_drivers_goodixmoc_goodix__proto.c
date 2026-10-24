--- libfprint/drivers/goodixmoc/goodix_proto.c.orig	2026-02-10 02:18:14 UTC
+++ libfprint/drivers/goodixmoc/goodix_proto.c
@@ -345,7 +345,7 @@
         g_debug ("Power button shield feature not supported!\n");
       break;
 
-    case MOC_CMD0_GET_VERSION:
+    case MOC_CMD0_GET_VERSION:;
       const uint8_t *version_info;
 
       if (!fpi_byte_reader_get_data (byte_reader, sizeof (gxfp_version_info_t), &version_info))
