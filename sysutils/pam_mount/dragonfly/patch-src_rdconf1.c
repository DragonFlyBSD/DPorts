--- src/rdconf1.c.intermediate	2016-08-11 14:53:21 UTC
+++ src/rdconf1.c
@@ -14,7 +14,7 @@
 #include <stdlib.h>
 #include <string.h>
 #include <libxml/parser.h>
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
 #	include <fstab.h>
 #elif defined(__linux__)
 #	include <mntent.h>
@@ -458,7 +458,7 @@ static char *fstab_value(const char *vol
 			l0g("field of %d invalid\n", field);
 			return NULL;
 	}
-#elif defined (__FreeBSD__) || defined (__OpenBSD__) || defined(__APPLE__)
+#elif defined(__DragonFly__) || defined (__FreeBSD__) || defined (__OpenBSD__) || defined(__APPLE__)
 	struct fstab *fstab_record;
 
 	if (!setfsent()) {
@@ -495,7 +495,7 @@ static char *fstab_value(const char *vol
 	val = xstrdup(val);
 #if defined(__linux__)
 	endmntent(fstab);
-#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#elif defined(__DragonFly__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
 	endfsent();
 #endif
 	return val;
