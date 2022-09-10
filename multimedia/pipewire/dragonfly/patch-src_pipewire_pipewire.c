--- src/pipewire/pipewire.c.orig	2022-07-15 22:00:19 UTC
+++ src/pipewire/pipewire.c
@@ -27,7 +27,7 @@
 #include <unistd.h>
 #include <limits.h>
 #include <stdio.h>
-#if !defined(__FreeBSD__) && !defined(__MidnightBSD__)
+#if !defined(__FreeBSD__) && !defined(__MidnightBSD__) && !defined(__DragonFly__)
 #include <sys/prctl.h>
 #endif
 #include <pwd.h>
@@ -769,7 +769,7 @@ static void init_prgname(void)
 		}
 	}
 #endif
-#if defined __FreeBSD__ || defined(__MidnightBSD__)
+#if defined __FreeBSD__ || defined(__MidnightBSD__) || defined(__DragonFly__)
 	{
 		ssize_t len;
 
@@ -779,7 +779,7 @@ static void init_prgname(void)
 		}
 	}
 #endif
-#if !defined(__FreeBSD__) && !defined(__MidnightBSD__)
+#if !defined(__FreeBSD__) && !defined(__MidnightBSD__) && !defined(__DragonFly__)
 	{
 		if (prctl(PR_GET_NAME, (unsigned long) name, 0, 0, 0) == 0) {
 			prgname = name;
