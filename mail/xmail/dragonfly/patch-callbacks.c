--- callbacks.c.intermediate	2019-03-20 07:40:44 UTC
+++ callbacks.c
@@ -43,7 +43,7 @@ extern int	noshare errno;
 extern int	noshare sys_nerr;
 extern char	noshare *sys_errlist[];
 #else
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 extern int	errno;
 extern int	sys_nerr;
 extern char	*sys_errlist[];
