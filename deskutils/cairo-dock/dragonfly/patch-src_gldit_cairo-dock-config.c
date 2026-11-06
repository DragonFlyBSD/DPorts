--- src/gldit/cairo-dock-config.c.orig	2026-11-06 06:40:31 UTC
+++ src/gldit/cairo-dock-config.c
@@ -18,6 +18,7 @@
 */
 
 #define _POSIX_C_SOURCE 200809L // needed for O_CLOEXEC
+#define _XOPEN_SOURCE 700 // setkey(), encrypt()
 
 #include <math.h>
 #include <string.h>
@@ -31,7 +32,7 @@
 #include "gldi-config.h"
 
 #ifdef HAVE_LIBCRYPT
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <unistd.h>  // on BSD, there is no crypt.h
 #else
 #include <crypt.h>
