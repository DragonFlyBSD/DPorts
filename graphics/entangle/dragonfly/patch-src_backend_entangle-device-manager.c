--- src/backend/entangle-device-manager.c.orig	2026-11-06 07:43:04 UTC
+++ src/backend/entangle-device-manager.c
@@ -18,7 +18,7 @@
  *
  */
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/socket.h>
 #include <sys/un.h>
 #include <glib.h>
@@ -41,7 +41,7 @@
 struct _EntangleDeviceManagerPrivate {
 #if defined(__linux__)
     GUdevClient *ctx;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     int efd;
 #endif
 };
@@ -58,7 +58,7 @@ static void entangle_device_manager_finalize(GObject *
 #if defined(__linux__)
     if (priv->ctx)
         g_object_unref(priv->ctx);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     if (priv->efd)
         close(priv->efd);
 #endif
@@ -138,7 +138,7 @@ static void do_udev_event(GUdevClient *client G_GNUC_U
     }
     g_free(port);
 }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 static void devd_init(EntangleDeviceManager *manager);
 
 static gboolean do_devd_event(GIOChannel *source,
@@ -264,7 +264,7 @@ static void entangle_device_manager_init_devices(Entan
     }
 
     g_list_free(devs);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
     ENTANGLE_DEBUG("Init devd");
 
