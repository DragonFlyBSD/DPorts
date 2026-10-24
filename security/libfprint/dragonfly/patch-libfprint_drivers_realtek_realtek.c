--- libfprint/drivers/realtek/realtek.c.orig	2026-02-10 02:18:14 UTC
+++ libfprint/drivers/realtek/realtek.c
@@ -1071,7 +1071,7 @@
       rtk_sensor_bulk_cmd (self, cmd_buf, NULL, FP_RTK_MSG_NO_STATUS, 0, fp_check_duplicate_cb);
       break;
 
-    case FP_RTK_ENROLL_COMMIT:
+    case FP_RTK_ENROLL_COMMIT:;
       gchar *valid_uid = NULL;
       gint payload_len;
 
