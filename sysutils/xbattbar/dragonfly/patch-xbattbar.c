--- xbattbar.c.intermediate	2016-06-27 12:15:32 UTC
+++ xbattbar.c
@@ -501,7 +501,7 @@ void battery_check(void)
 
 #endif /* __bsdi__ */
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <sys/types.h>
 #include <sys/sysctl.h>
