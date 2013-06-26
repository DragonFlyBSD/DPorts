--- pkg/utils.c.orig	2013-06-25 09:55:11.000000000 +0000
+++ pkg/utils.c
@@ -50,8 +50,12 @@ query_tty_yesno(const char *msg, ...)
 	va_list	 ap;
 	int	 tty_fd;
 	FILE	*tty;
+	int	tty_flags = O_RDWR;
 
-	tty_fd = open(_PATH_TTY, O_RDWR|O_TTY_INIT);
+#ifdef __FreeBSD__
+	tty_flags |= O_TTY_INIT;
+#endif
+	tty_fd = open(_PATH_TTY, tty_flags);
 	if (tty_fd == -1)
 		return (r);		/* No ctty -- return the
 					 * default answer */
