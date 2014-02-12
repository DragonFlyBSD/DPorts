
$FreeBSD: head/net/l2tpd/files/patch-avpsend.c 340725 2014-01-22 17:40:44Z mat $

--- avpsend.c	2002/10/22 09:41:27	1.1
+++ avpsend.c	2002/10/22 09:43:06
@@ -13,7 +13,6 @@
  
 #include <stdlib.h>
 #include <string.h>
-#include <netinet/in.h>
 #include "l2tp.h"
 
 /* 
