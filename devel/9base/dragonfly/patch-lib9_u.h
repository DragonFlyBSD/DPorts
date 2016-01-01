--- lib9/u.h.orig	2010-06-04 13:46:05.000000000 +0300
+++ lib9/u.h
@@ -114,6 +114,13 @@ typedef long p9jmp_buf[sizeof(sigjmp_buf
 #	undef _NEEDUSHORT
 #	undef _NEEDUINT
 #	undef _NEEDULONG
+#elif defined(__DragonFly__)
+#	include <sys/types.h>
+#	include <pthread.h>
+#	define PLAN9PORT_USING_PTHREADS 1
+#	undef _NEEDUSHORT
+#	undef _NEEDUINT
+#	undef _NEEDULONG
 #else
 	/* No idea what system this is -- try some defaults */
 #	include <pthread.h>
