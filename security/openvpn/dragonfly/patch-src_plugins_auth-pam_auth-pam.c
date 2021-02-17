--- src/plugins/auth-pam/auth-pam.c.orig	2020-10-28 07:25:23 UTC
+++ src/plugins/auth-pam/auth-pam.c
@@ -49,6 +49,9 @@
 #include <syslog.h>
 #include "utils.h"
 
+#if defined(__DragonFly__)
+#include <limits.h>	/* For PATH_MAX */
+#endif
 #include <openvpn-plugin.h>
 
 #define DEBUG(verb) ((verb) >= 4)
