--- libgnomecups/snmpkit/snmpkit_interface.C.orig	2005-06-01 17:48:36.000000000 +0300
+++ libgnomecups/snmpkit/snmpkit_interface.C
@@ -29,6 +29,7 @@
 #include "snmpkit"
 
 #include "errno.h"
+#include <cstring> // for strdup
 
 SNMPERRNO sk_errno;
 char *sk_erroid;
