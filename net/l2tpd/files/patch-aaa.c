
$FreeBSD: ports/net/l2tpd/files/patch-aaa.c,v 1.2 2012/11/17 06:00:04 svnexp Exp $

--- aaa.c	2002/10/22 09:41:27	1.1
+++ aaa.c	2002/10/22 09:42:57
@@ -14,8 +14,6 @@
 
 #include <stdio.h>
 #include <stdlib.h>
-#include <netinet/in.h>
-#include <arpa/inet.h>
 #include <string.h>
 #include <errno.h>
 #include "l2tp.h"
