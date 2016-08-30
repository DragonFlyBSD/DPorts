--- ../generic/filelock.h.intermediate	2016-07-29 15:15:49 UTC
+++ ../generic/filelock.h
@@ -28,7 +28,9 @@ typedef	int	intptr_t;
 #endif
 #ifdef FREEBSD
 #    include <unistd.h>
+# ifndef __DragonFly__
 #    include <sys/lockf.h>
+# endif
 #    include <sys/file.h>
 #endif
 #ifdef BSDI
