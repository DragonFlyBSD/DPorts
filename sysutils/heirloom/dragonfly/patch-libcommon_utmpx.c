--- libcommon/utmpx.c.intermediate	2019-08-04 11:37:27.000000000 +0000
+++ libcommon/utmpx.c
@@ -37,7 +37,7 @@ static struct utmpx	utx;
 static const char	*utmpfile = NULL;
 
 #include <sys/param.h>
-#if !(defined(__FreeBSD__) && __FreeBSD_version >= 900007)
+#if !(defined(__FreeBSD__) && __FreeBSD_version >= 900007) && !defined(__DragonFly__)
 
 static FILE *
 init(void)
