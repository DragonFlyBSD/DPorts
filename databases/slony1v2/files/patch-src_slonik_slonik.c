
$FreeBSD: head/databases/slony1v2/files/patch-src_slonik_slonik.c 377526 2015-01-20 15:48:29Z olgeni $

--- src/slonik/slonik.c.orig
+++ src/slonik/slonik.c
@@ -22,7 +22,6 @@
 #include <ctype.h>
 #include <sys/types.h>
 #include <sys/wait.h>
-#include <alloca.h>
 #else
 #include <winsock2.h>
 #include <windows.h>
