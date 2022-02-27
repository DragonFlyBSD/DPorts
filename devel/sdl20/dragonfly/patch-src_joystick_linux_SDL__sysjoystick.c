--- src/joystick/linux/SDL_sysjoystick.c.orig	2021-11-26 16:03:45 UTC
+++ src/joystick/linux/SDL_sysjoystick.c
@@ -506,6 +506,7 @@ static int SDL_inotify_init1(void) {
     return fd;
 }
 #endif
+#endif
 
 static int
 StrHasPrefix(const char *string, const char *prefix)
@@ -561,6 +562,7 @@ IsJoystickDeviceNode(const char *node)
     }
 }
 
+#ifdef HAVE_INOTIFY
 static void
 LINUX_InotifyJoystickDetect(void)
 {
