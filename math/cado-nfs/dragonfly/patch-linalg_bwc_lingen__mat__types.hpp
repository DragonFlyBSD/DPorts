--- linalg/bwc/lingen_mat_types.hpp.orig	2021-09-16 01:25:08 UTC
+++ linalg/bwc/lingen_mat_types.hpp
@@ -1,4 +1,4 @@
-#if !(defined(__OpenBSD__) || defined(__FreeBSD__))
+#if !(defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__))
 #ifndef __STDC_FORMAT_MACROS
 #error "Please define __STDC_FORMAT_MACROS before including lingen_mattypes.h"
 #endif
