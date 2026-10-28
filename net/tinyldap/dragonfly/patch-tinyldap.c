--- tinyldap.c.orig
+++ tinyldap.c
@@ -20,7 +20,7 @@
 #ifdef STANDALONE
 #include "socket.h"
 #include "ip6.h"
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/wait.h>
 #else
