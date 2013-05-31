--- pgdispd/proccom.c.intermediate	2013-05-29 12:48:58.000000000 +0000
+++ pgdispd/proccom.c
@@ -93,7 +93,7 @@ static char rcsid[]="@(#)$Id: proccom.c,
 #include <sys/types.h>
 #include <netinet/in.h>
 
-#if !defined(VMS) && !defined(__FreeBSD__)
+#if !defined(VMS) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <values.h>
 #endif
 
