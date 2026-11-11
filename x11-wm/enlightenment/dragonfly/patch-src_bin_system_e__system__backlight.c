--- src/bin/system/e_system_backlight.c.orig
+++ src/bin/system/e_system_backlight.c
@@ -43,7 +43,7 @@
         if (ret < 0) ERR("Write failed to [%s]\n", buf);
         close(fd);
      }
-#elif defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 #if __FreeBSD__ > 12
    int fd = open("/dev/backlight/backlight0", O_RDWR);
    if (fd >= 0)
@@ -82,7 +82,7 @@
         lig->val = atoi(s);
         eina_stringshare_del(s);
      }
-#elif defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 #if __FreeBSD__ > 12
    struct backlight_props props;
    int fd = open("/dev/backlight/backlight0", O_RDWR);
@@ -202,7 +202,7 @@
      }
    if (lig->max <= 0) lig->max = 255;
    lig->prefer = eeze_udev_syspath_check_sysattr(lig->dev, "type", "firmware");
-#elif defined (__FreeBSD_kernel__)
+#elif defined (__FreeBSD_kernel__) || defined (__DragonFly__)
 #if __FreeBSD__ > 12
    struct backlight_props props;
    int fd = open("/dev/backlight/backlight0", O_RDWR);
@@ -273,7 +273,7 @@
         if (_light_device_include(s)) _light_add(s);
         eina_stringshare_del(s);
      }
-#elif defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD_kernel__) || defined(__DragonFly__)
    // XXX; shouldn't we scan for devices?
 #if __FreeBSD__ > 12
    _light_add("backlight0");
