--- libyara/proc/linux.c.orig	2022-08-08 11:29:28 UTC
+++ libyara/proc/linux.c
@@ -34,7 +34,9 @@ SOFTWARE, EVEN IF ADVISED OF THE POSSIBI
 #include <inttypes.h>
 #include <sys/mman.h>
 #include <sys/stat.h>
+#ifndef __DragonFly__
 #include <sys/sysmacros.h>
+#endif
 #include <sys/types.h>
 #include <sys/wait.h>
 #include <unistd.h>
