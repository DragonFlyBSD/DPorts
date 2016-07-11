--- gamepad_analog.c.orig	2012-12-19 18:35:39.000000000 +0200
+++ gamepad_analog.c
@@ -1,4 +1,4 @@
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
