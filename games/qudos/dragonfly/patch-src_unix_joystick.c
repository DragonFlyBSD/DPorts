--- src/unix/joystick.c.orig
+++ src/unix/joystick.c
@@ -101,7 +101,7 @@
 	in_joystick = ri.Cvar_Get("in_joystick", "1", CVAR_ARCHIVE);
 	if (in_joystick->value) {
 		joy_name = ri.Cvar_Get("joy_name", "joystick", 0);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		joy_dev = ri.Cvar_Get("joy_dev", "/dev/joy*", CVAR_ARCHIVE);
 #else
 		joy_dev = ri.Cvar_Get("joy_dev", "/dev/js*", CVAR_ARCHIVE);
