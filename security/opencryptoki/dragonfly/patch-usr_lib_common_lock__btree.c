--- usr/lib/common/lock_btree.c.orig	2018-11-16 14:53:03 UTC
+++ usr/lib/common/lock_btree.c
@@ -18,7 +18,11 @@
 
 
 #include <stdio.h>
+#if defined(__DragonFly__)
+#include <stdlib.h>
+#else
 #include <malloc.h>
+#endif
 #include <pthread.h>
 
 #include "pkcs11types.h"
