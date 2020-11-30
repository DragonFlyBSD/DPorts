--- src/structures.h.orig	2019-08-01 14:54:28 UTC
+++ src/structures.h
@@ -4,6 +4,7 @@
 #include <time.h>
 #include <stdio.h>
 #include <fcntl.h>
+#include <stdint.h>
 #include <sys/types.h>
 #include <sys/stat.h>
 #ifndef NOPSTDINT
@@ -461,9 +462,15 @@ struct clientparam {
 
 	int	res,
 		status;
+#if defined(__DragonFly__)
+	int	pwtype;
+	uintptr_t threadid;
+	int	weight,
+#else
 	int	pwtype,
 		threadid,
 		weight,
+#endif
 		nolog,
 		nolongdatfilter,
 		nooverwritefilter,
