--- src/ou.cpp.intermediate	2026-09-05 06:49:01 UTC
+++ src/ou.cpp
@@ -22,7 +22,11 @@
 #include <string.h>
 #include <math.h>
 #include <time.h>
+#ifdef WIN32
 #include <sys/timeb.h>
+#else
+#include <sys/time.h>
+#endif
 #include <setjmp.h>
 #include "ou.h"
 #include "gui.h"
@@ -159,7 +163,7 @@ void Idle(void)
 	struct _timeb currtime;
 	char sbuf[80];
 #else
-	struct timeb currtime;
+	struct timeval currtime;
 #endif
 
 	if (glutGetWindow() != main_window)
@@ -238,10 +242,11 @@ void Idle(void)
 	if (realtime) {
 #ifdef WIN32
 		_ftime(&currtime);		/* we need milliseconds to avoid jerkiness */
+		days = (time(NULL) + currtime.millitm / 1000.0) / 3600.0 / 24.0 - 10092.0;	/* days = NOW */
 #else
-		ftime(&currtime);		/* we need milliseconds to avoid jerkiness */
+		gettimeofday(&currtime, NULL);		/* we need milliseconds to avoid jerkiness */
+		days = (currtime.tv_sec + currtime.tv_usec / 1000000.0) / 3600.0 / 24.0 - 10092.0;	/* days = NOW */
 #endif
-		days = (time(NULL) + currtime.millitm / 1000.0) / 3600.0 / 24.0 - 10092.0;	/* days = NOW */
 	}
 
 	if (!paused)
