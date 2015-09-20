--- os/os.h.orig	2014-05-13 02:18:13.000000000 +0300
+++ os/os.h
@@ -18,6 +18,7 @@ enum {
 	os_mac,
 	os_netbsd,
 	os_openbsd,
+	os_dragonfly,
 	os_solaris,
 	os_windows,
 	os_android,
@@ -35,6 +36,8 @@ enum {
 #include "os-openbsd.h"
 #elif defined(__NetBSD__)
 #include "os-netbsd.h"
+#elif defined(__DragonFly__)
+#include "os-dragonfly.h"
 #elif defined(__sun__)
 #include "os-solaris.h"
 #elif defined(__APPLE__)
