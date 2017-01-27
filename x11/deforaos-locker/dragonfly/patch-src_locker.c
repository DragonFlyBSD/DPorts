--- src/locker.c.orig	2016-02-20 15:10:43.000000000 +0200
+++ src/locker.c
@@ -20,7 +20,7 @@ static char const _license[] =
 #if defined(__NetBSD__)
 # include <sys/param.h>
 # include <sys/sysctl.h>
-#elif !defined(__FreeBSD__)
+#elif !defined(__FreeBSD__) || defined(__DragonFly__)
 # include <fcntl.h>
 #endif
 #include <sys/types.h>
@@ -1417,7 +1417,7 @@ static int _locker_action_suspend(Locker
 {
 #if defined(__NetBSD__)
 	int sleep_state = 3;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 	char * suspend[] = { PREFIX "/bin/sudo", "sudo", "/usr/sbin/zzz",
 		NULL };
 	GError * error = NULL;
@@ -1444,7 +1444,7 @@ static int _locker_action_suspend(Locker
 		_locker_error(locker, strerror(errno), 1);
 		return -1;
 	}
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 	if(g_spawn_async(NULL, suspend, NULL, G_SPAWN_FILE_AND_ARGV_ZERO, NULL,
 				NULL, NULL, &error) != TRUE)
 	{
