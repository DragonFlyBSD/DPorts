--- is_key_down.c.orig	2014-07-21 13:42:15 UTC
+++ is_key_down.c
@@ -40,6 +40,10 @@ void quisk_set_key_down(int state)
 #ifdef __linux__
 #include <linux/ppdev.h>
 #endif
+#ifdef __DragonFly__
+#include <dev/misc/ppi/ppi.h>
+#include <bus/ppbus/ppbconf.h>
+#endif
 #ifdef __FreeBSD__
 #include <dev/ppbus/ppi.h>
 #include <dev/ppbus/ppbconf.h>
@@ -197,7 +201,7 @@ static int is_key_down_pport(void)
 	ioctl(fd, PPRSTATUS, &byte);
 	if (byte & 0x10)
 		return 1;	// Key is down
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 	uint8_t byte;
 	if (fd < 0)		// port not open
 		return 0;	// Key is up
