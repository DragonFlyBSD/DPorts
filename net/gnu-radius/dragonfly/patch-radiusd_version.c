--- radiusd/version.c.orig	2008-12-15 08:03:24 UTC
+++ radiusd/version.c
@@ -42,6 +42,9 @@ static char *sys_def[] = {
 #if defined(bsdi)
         "bsdi",
 #endif
+#if defined(__DragonFly__)
+        "DragonFly",
+#endif
 #if defined(__FreeBSD__)
         "FreeBSD",
 #endif
