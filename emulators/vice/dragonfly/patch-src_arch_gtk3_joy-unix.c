--- src/arch/gtk3/joy-unix.c.orig	2018-09-24 17:40:52 UTC
+++ src/arch/gtk3/joy-unix.c
@@ -339,7 +339,7 @@ const char *joystick_ui_get_next_device_
 
         if (!use_old_api) {
 #ifdef HAS_JOYSTICK
-#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__) && !defined (__DragonflyBSD__)
+#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__) && !defined (__DragonFly__)
             if ((*id >= JOYDEV_ANALOG_0) && (*id <= JOYDEV_ANALOG_5)) {
                 idx = *id - JOYDEV_ANALOG_0;
                 if (ajoyfd[idx] >= 0) {
