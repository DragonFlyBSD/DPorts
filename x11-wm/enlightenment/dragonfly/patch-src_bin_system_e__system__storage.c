--- src/bin/system/e_system_storage.c.orig	2020-07-26 16:39:12 UTC
+++ src/bin/system/e_system_storage.c
@@ -317,7 +317,7 @@ _cb_store_eject(void *data EINA_UNUSED,
         ERR("Invalid device [%s]\n", params);
         return;
      }
-#if defined (__FreeBSD__) || defined (__OpenBSD__)
+#if defined (__FreeBSD__) || defined (__OpenBSD__) || defined(__DragonFly__)
    // on bsd cdcontrol is the shnizzle for this
    if (ecore_file_app_installed("cdcontrol"))
      snprintf(cmd0, sizeof(cmd0), "cdcontrol eject");
