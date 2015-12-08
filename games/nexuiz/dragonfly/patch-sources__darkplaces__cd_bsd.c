--- sources/darkplaces/cd_bsd.c.orig	2009-01-19 17:14:26.000000000 +0200
+++ sources/darkplaces/cd_bsd.c
@@ -29,14 +29,14 @@ Foundation, Inc., 59 Temple Place - Suit
 #include <paths.h>
 #include <unistd.h>
 #include <time.h>
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 # include <util.h>
 #endif
 
 #include "cdaudio.h"
 
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 # define DEFAULT_CD_DEVICE _PATH_DEV "cd0"
 #else
 # define DEFAULT_CD_DEVICE "/dev/acd0c"
@@ -259,7 +259,7 @@ void CDAudio_SysInit (void)
 
 int CDAudio_SysStartup (void)
 {
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 	char buff [80];
 
 	if ((cdfile = opendisk(cd_dev, O_RDONLY, buff, sizeof(buff), 0)) == -1)
