--- src/pipewire/pipewire.c.orig	2024-03-29 19:43:44 UTC
+++ src/pipewire/pipewire.c
@@ -7,7 +7,8 @@
 #include <unistd.h>
 #include <limits.h>
 #include <stdio.h>
-#if !defined(__FreeBSD__) && !defined(__MidnightBSD__) && !defined(__GNU__)
+#if !defined(__FreeBSD__) && !defined(__MidnightBSD__) && !defined(__GNU__) && \
+    !defined(__DragonFly__)
 #include <sys/prctl.h>
 #endif
 #include <pwd.h>
@@ -743,7 +744,7 @@ static void init_prgname(void)
 		}
 	}
 #endif
-#if defined __FreeBSD__ || defined(__MidnightBSD__)
+#if defined __FreeBSD__ || defined(__MidnightBSD__) || defined(__DragonFly__)
 	{
 		ssize_t len;
 
@@ -753,7 +754,8 @@ static void init_prgname(void)
 		}
 	}
 #endif
-#if !defined(__FreeBSD__) && !defined(__MidnightBSD__) && !defined(__GNU__)
+#if !defined(__FreeBSD__) && !defined(__MidnightBSD__) && !defined(__GNU__) && \
+    !defined(__DragonFly__)
 	{
 		if (prctl(PR_GET_NAME, (unsigned long) name, 0, 0, 0) == 0) {
 			prgname = name;
