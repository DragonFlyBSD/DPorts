
$FreeBSD: net-p2p/libbt/files/patch-src_btlist.c 340725 2014-01-22 17:40:44Z mat $

--- src/btlist.c.orig
+++ src/btlist.c
@@ -13,6 +13,7 @@

 #include "config.h"

+#include <sys/types.h>
 #include <openssl/sha.h>
 #include <stdlib.h>
 #include <string.h>
