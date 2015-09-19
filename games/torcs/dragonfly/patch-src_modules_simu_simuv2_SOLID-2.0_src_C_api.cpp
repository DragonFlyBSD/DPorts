--- src/modules/simu/simuv2/SOLID-2.0/src/C-api.cpp.orig	2012-06-01 02:44:35.000000000 +0300
+++ src/modules/simu/simuv2/SOLID-2.0/src/C-api.cpp
@@ -44,7 +44,7 @@
 #include "Polyhedron.h"
 #include "Response.h"
 #include "RespTable.h"
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__) || defined(__NetBSD__)
 #  include <sys/types.h>
 #endif
 
