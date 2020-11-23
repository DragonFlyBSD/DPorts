--- client/pam_radius/pam_radius.c.orig	2008-12-15 08:03:23 UTC
+++ client/pam_radius/pam_radius.c
@@ -32,6 +32,7 @@
 #include <ctype.h>
 #include <syslog.h>
 #include <errno.h>
+#include <arpa/inet.h>
 
 #include <common.h> 
 #include <radius/radutmp.h>
