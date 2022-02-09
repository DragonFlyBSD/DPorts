--- loadave.c.intermediate	2022-02-09 14:38:52.000000000 +0000
+++ loadave.c
@@ -38,6 +38,7 @@ int la_read(unsigned long long *times)
 #include <sys/errno.h>
 #include <sys/resource.h>	// CPUSTATES
 #include <sys/sysctl.h>		// sysctlbyname()
+#include <string.h>             // strerror()
           
 int la_read(unsigned long long *times)
 {
