--- src/p11_atfork.c.orig	2019-04-03 20:14:33 UTC
+++ src/p11_atfork.c
@@ -21,6 +21,7 @@
  */
 
 #include "libp11-int.h"
+#include <unistd.h>	/* for getpid() */
 
 #ifndef _WIN32
 
