
$FreeBSD: head/net/l2tpd/files/patch-aaa.c 340725 2014-01-22 17:40:44Z mat $

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
