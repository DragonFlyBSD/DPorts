--- src/pipewire/pipewire.c.orig	2021-06-16 11:12:40.069576000 +0200
+++ src/pipewire/pipewire.c	2021-06-16 11:19:10.980727000 +0200
@@ -29,7 +29,7 @@
 #include <unistd.h>
 #include <limits.h>
 #include <stdio.h>
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <sys/prctl.h>
 #endif
 #include <pwd.h>
@@ -526,7 +526,7 @@
 			return strrchr(prgname, '/') + 1;
 	}
 #endif
-#if defined __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	{
 		ssize_t len;
 		spa_memzero(prgname, sizeof(prgname));
@@ -534,7 +534,7 @@
 			return strrchr(prgname, '/') + 1;
 	}
 #endif
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 	{
 		if (prctl(PR_GET_NAME, (unsigned long) prgname, 0, 0, 0) == 0)
 			return prgname;
