--- libmonit/src/system/Link.c.orig	2015-10-22 15:44:32.000000000 +0200
+++ libmonit/src/system/Link.c	2015-12-05 21:27:14.873455000 +0100
@@ -153,6 +153,8 @@ static void _updateValue(LinkData_T *dat
 #include "os/openbsd/Link.inc"
 #elif defined NETBSD
 #include "os/netbsd/Link.inc"
+#elif defined DRAGONFLY
+#include "os/dragonfly/Link.inc"
 #elif defined LINUX
 #include "os/linux/Link.inc"
 #elif defined SOLARIS
