--- utils/select_mpi.h.orig	2021-09-16 01:25:08 UTC
+++ utils/select_mpi.h
@@ -3,7 +3,7 @@
 #include "cado_mpi_config.h"
 #include "macros.h"
 
-#if !(defined(__OpenBSD__) || defined(__FreeBSD__))
+#if !(defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__))
 #if !(defined(_POSIX_C_SOURCE) && _POSIX_C_SOURCE >= 200112L)
 #ifdef HAVE_GLIBC
 #include <features.h>   // we must be sure to include something from the glibc...
