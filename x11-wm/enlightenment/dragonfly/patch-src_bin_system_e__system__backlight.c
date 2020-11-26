--- src/bin/system/e_system_backlight.c.orig	2020-07-26 16:39:12 UTC
+++ src/bin/system/e_system_backlight.c
@@ -31,7 +31,7 @@ _light_set(Light *lig, int val)
           ERR("Write failed of [%s] to [%s]\n", buf2, buf);
         close(fd);
      }
-#elif defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD_kernel__) || defined(__DragonFly__)
    sysctlbyname(lig->dev, NULL, NULL, &(lig->val), sizeof(lig->val));
 #endif
 }
@@ -47,7 +47,7 @@ _light_get(Light *lig)
         lig->val = atoi(s);
         eina_stringshare_del(s);
      }
-#elif defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD_kernel__) || defined(__DragonFly__)
    size_t plen = sizeof(lig->val);
    sysctlbyname(lig->dev, &(lig->val), &plen, NULL, 0);
 #endif
@@ -154,7 +154,7 @@ _light_add(const char *dev)
      }
    if (lig->max <= 0) lig->max = 255;
    lig->prefer = eeze_udev_syspath_check_sysattr(lig->dev, "type", "firmware");
-#elif defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD_kernel__) || defined(__DragonFly__)
    size_t plen = sizeof(lig->val);
    sysctlbyname(lig->dev, &(lig->val), &plen, NULL, 0);
    lig->max = 100;
@@ -212,7 +212,7 @@ _light_refresh_devices()
         if (_light_device_include(s)) _light_add(s);
         eina_stringshare_del(s);
      }
-#elif defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD_kernel__) || defined(__DragonFly__)
    // XXX; shouldn't we scan for devices?
    _light_add("hw.acpi.video.lcd0.brightness");
 #endif
