--- chrome/browser/notifications/notification_platform_bridge_linux.cc.orig
+++ chrome/browser/notifications/notification_platform_bridge_linux.cc
@@ -369,7 +369,7 @@
   result.has_icon = WriteImageFile(icon, dir_path.Append("icon.png"));
   result.has_image = WriteImageFile(image, dir_path.Append("image.png"));
   // XXX
-#if !BUILDFLAG(IS_OPENBSD)
+#if !BUILDFLAG(IS_OPENBSD) && !BUILDFLAG(IS_DRAGONFLY)
   if (result.has_icon) {
     result.icon_bytes = icon;
     if (icon && icon->size() > 0) {
