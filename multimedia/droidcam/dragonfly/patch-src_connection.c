--- src/connection.c.orig
+++ src/connection.c
@@ -16,7 +16,7 @@
 #include <time.h>
 #include <unistd.h>
 
-#if __FreeBSD__
+#if __FreeBSD__ || __DragonFly__
 #include <netinet/in.h>
 #include <ifaddrs.h>
 #include <net/if.h>
