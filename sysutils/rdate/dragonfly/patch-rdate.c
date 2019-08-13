--- rdate.c.orig	2015-05-04 10:29:12 UTC
+++ rdate.c
@@ -52,8 +52,9 @@
 /* there are systems without libutil; for portability */
 #ifndef NO_UTIL
 #include <util.h>
+#include <utmpx.h>
 #else
-#define logwtmp(a,b,c)
+#define logwtmpx(a,b,c,d,e)
 #endif
 
 void rfc868time_client(const char *, int, struct timeval *, struct timeval *, int);
@@ -134,10 +135,10 @@ main(int argc, char **argv)
 
 	if (!pr) {
 		if (!slidetime) {
-			logwtmp("|", "date", "");
+			logwtmpx("|", "date", "", 0, OLD_TIME);
 			if (settimeofday(&new, NULL) == -1)
 				err(1, "Could not set time of day");
-			logwtmp("{", "date", "");
+			logwtmpx("{", "date", "", 0, NEW_TIME);
 		} else {
 			if (adjtime(&adjust, NULL) == -1)
 				err(1, "Could not adjust time of day");

