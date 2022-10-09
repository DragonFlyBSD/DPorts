--- lib/irrlichtmt/source/Irrlicht/CIrrDeviceLinux.cpp.orig	2022-10-08 22:01:48.851404000 +0200
+++ lib/irrlichtmt/source/Irrlicht/CIrrDeviceLinux.cpp	2022-10-08 22:52:31.080756000 +0200
@@ -47,7 +47,7 @@
 #include <fcntl.h>
 #include <unistd.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/joystick.h>
 #else
 
@@ -1665,7 +1665,7 @@
 		if (-1 == info.fd)
 			continue;
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		info.axes=2;
 		info.buttons=2;
 #else
@@ -1689,7 +1689,7 @@
 		returnInfo.Axes = info.axes;
 		returnInfo.Buttons = info.buttons;
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) &&  !defined(__DragonFly__)
 		char name[80];
 		ioctl( info.fd, JSIOCGNAME(80), name);
 		returnInfo.Name = name;
@@ -1724,7 +1724,7 @@
 	{
 		JoystickInfo & info =  ActiveJoysticks[j];
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		struct joystick js;
 		if (read(info.fd, &js, sizeof(js)) == sizeof(js))
 		{
