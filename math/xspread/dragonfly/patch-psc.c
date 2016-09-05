--- psc.c.intermediate	2016-09-05 09:47:30 UTC
+++ psc.c
@@ -44,7 +44,7 @@ int	scan PROTO((void));
 char	*progname;
 
 
-/*#if defined(SYSV3) || defined(SUNOS4) || defined (__FreeBSD__)
+/*#if defined(SYSV3) || defined(SUNOS4) || defined (__FreeBSD__) || defined(__DragonFly__)
 extern void exit();
 #else
 extern int exit();
