
$FreeBSD: ports/net/l2tpd/files/patch-avpsend.c,v 1.2 2012/11/17 06:00:04 svnexp Exp $

--- avpsend.c	2002/10/22 09:41:27	1.1
+++ avpsend.c	2002/10/22 09:43:06
@@ -13,7 +13,6 @@
  
 #include <stdlib.h>
 #include <string.h>
-#include <netinet/in.h>
 #include "l2tp.h"
 
 /* 
