
$FreeBSD: ports/net-p2p/libbt/files/patch-src_btlist.c,v 1.2 2012/11/17 06:00:40 svnexp Exp $

--- src/btlist.c.orig
+++ src/btlist.c
@@ -13,6 +13,7 @@

 #include "config.h"

+#include <sys/types.h>
 #include <openssl/sha.h>
 #include <stdlib.h>
 #include <string.h>
