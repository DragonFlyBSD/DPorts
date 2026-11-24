--- cvswrap.c.orig
+++ cvswrap.c
@@ -94,7 +94,7 @@
     char **cvsrootp);
 static void	slashfix(char *);
 static int	strings_have_line(char * const *strings, const char *line);
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 static char *	strndup(const char *str, size_t len);
 #endif
 static int	timeval_diff(const struct timeval *tv1,
@@ -326,7 +326,7 @@
 	return (0);
 }
 
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 /*
  * return: a copy of "len" bytes from byte string "str" and NULL terminate.
  */
