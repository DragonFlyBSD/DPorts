--- tests/util/piglit-util.c.intermediate	2021-03-19 12:08:24.000000000 +0000
+++ tests/util/piglit-util.c
@@ -123,7 +123,7 @@ int asprintf(char **strp, const char *fm
 
 #endif /* HAVE_ASPRINTF */
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <libgen.h>	/* For basename(3) */
 #endif
 
