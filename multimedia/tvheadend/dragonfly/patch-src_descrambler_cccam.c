--- src/descrambler/cccam.c.orig
+++ src/descrambler/cccam.c
@@ -18,6 +18,7 @@
  */
 
 #include <ctype.h>
+#include <sys/endian.h>
 #include <openssl/sha.h>
 #include "tvheadend.h"
 #include "tcp.h"
