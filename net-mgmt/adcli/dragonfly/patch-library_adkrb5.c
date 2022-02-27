--- library/adkrb5.c.intermediate	2022-01-31 12:01:52.000000000 +0000
+++ library/adkrb5.c
@@ -30,6 +30,9 @@
 #ifndef ENOKEY
 #	define ENOKEY	ENOTCAPABLE
 #endif
+#ifndef ENOTCAPABLE
+#	define ENOTCAPABLE EINVAL
+#endif
 #ifdef HEIMDAL
 #	include <krb5.h>
 #else
