--- config.h.intermediate	2019-11-08 17:29:23.000000000 +0000
+++ config.h
@@ -9,6 +9,8 @@
 #ifdef _HAVE_PARAM_H
 # include <sys/param.h>
 #endif
+#include <string.h>	/* for strcpy() */
+#include <unistd.h>	/* for lseek() */
 
 /* standard unix V (?) */
 #ifdef	M_SYSV
