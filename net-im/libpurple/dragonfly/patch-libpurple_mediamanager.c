--- libpurple/mediamanager.c.orig	2020-06-10 02:41:32 UTC
+++ libpurple/mediamanager.c
@@ -44,6 +44,8 @@
 #else
 #include <farstream/fs-element-added-notifier.h>
 #endif
+#endif
+#ifdef __DragonFly__
 #ifdef HAVE_MEDIA_APPLICATION
 #include <gst/app/app.h>
 #endif
