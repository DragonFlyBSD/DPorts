--- plugins/battery/battery.c.intermediate	2022-02-09 12:55:47.000000000 +0000
+++ plugins/battery/battery.c
@@ -5,7 +5,7 @@
 //#include <sys/stat.h>
 //#include <fcntl.h>
 
-#if defined __FreeBSD__
+#if defined __FreeBSD__ || defined __DragonFly__
 #include <sys/param.h>
 #include <sys/sysctl.h>
 #endif
@@ -58,11 +58,12 @@ static gchar *batt_na[] = {
 
 #if defined __linux__
 #include "os_linux.c"
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
 static void
 battery_update_os(battery_priv * c)
 {
-	static int	mib_state[4], mib_life[4], miblen_state, miblen_life, init = 0;
+	static int	mib_state[4], mib_life[4], init = 0;
+	static size_t	miblen_state, miblen_life;
 	size_t		len;
 	int		state;
 	int		life;
