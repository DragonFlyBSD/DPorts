--- src/helper.c.orig	2015-10-23 20:28:23.000000000 +0300
+++ src/helper.c
@@ -449,7 +449,7 @@ static void _shutdown_dialog_on_response
 	Panel * panel = data;
 	char * reboot[] = { "/sbin/shutdown", "shutdown", "-r", "now", NULL };
 	char * shutdown[] = { "/sbin/shutdown", "shutdown",
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 		"-p",
 #else
 		"-h",
