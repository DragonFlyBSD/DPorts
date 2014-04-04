--- 3rdparty/iaxclient/lib/libiax2/src/iax.c.intermediate	2014-04-03 23:55:39.925455000 +0000
+++ 3rdparty/iaxclient/lib/libiax2/src/iax.c
@@ -72,7 +72,7 @@
 #include <arpa/inet.h>
 #include <time.h>
 
-#if !defined(MACOSX) && !defined(__OpenBSD__) && !defined(__FreeBSD__)
+#if !defined(MACOSX) && !defined(__OpenBSD__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <malloc.h>
 #if !defined(SOLARIS)
 #include <error.h>
