
$FreeBSD: net-p2p/libbt/files/patch-src_btlist.c 300897 2012-07-14 14:29:18Z beat $

--- src/btlist.c.orig
+++ src/btlist.c
@@ -13,6 +13,7 @@

 #include "config.h"

+#include <sys/types.h>
 #include <openssl/sha.h>
 #include <stdlib.h>
 #include <string.h>
