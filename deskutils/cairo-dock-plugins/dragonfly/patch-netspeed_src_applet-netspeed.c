--- netspeed/src/applet-netspeed.c.intermediate	2019-05-09 17:59:27.000000000 +0000
+++ netspeed/src/applet-netspeed.c
@@ -21,7 +21,7 @@
 #include <stdio.h>
 #include <string.h>
 
-#ifdef __FreeBSD__ 
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/socket.h>
 #include <ifaddrs.h>
@@ -111,7 +111,7 @@ void cd_netspeed_get_data (GldiModuleIns
 	g_return_if_fail (fTimeElapsed > 0.1 || !myData.bInitialized);
 	myData.bAcquisitionOK = FALSE;
 	
-	#ifdef __FreeBSD__  // thanks to Max Power for the BSD port
+	#if defined(__FreeBSD__) || defined(__DragonFly__)  // thanks to Max Power for the BSD port
 	struct ifaddrs *ifap, *ifa;
 	if (getifaddrs(&ifap) != 0)
 	{
