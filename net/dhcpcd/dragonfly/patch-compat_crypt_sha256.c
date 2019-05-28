--- compat/crypt/sha256.c.orig	2019-05-04 09:19:02 UTC
+++ compat/crypt/sha256.c
@@ -28,14 +28,7 @@
 
 #include <string.h>
 
-#ifdef __GLIBC__
-#  include <endian.h>
-#endif
-#ifdef BSD
-#  ifndef __QNX__
-#    include <sys/endian.h>
-#  endif
-#endif
+#include <sys/endian.h>
 
 #include "common.h"
 #include "sha256.h"
