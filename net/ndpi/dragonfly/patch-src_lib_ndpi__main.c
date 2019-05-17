--- src/lib/ndpi_main.c.intermediate	2019-05-14 17:05:47.000000000 +0000
+++ src/lib/ndpi_main.c
@@ -41,7 +41,7 @@
 #include <unistd.h>
 #endif
 
-#if defined __FreeBSD__ || defined __NetBSD__ || defined __OpenBSD__
+#if defined __FreeBSD__ || defined __NetBSD__ || defined __OpenBSD__ || defined __DragonFly__
 #include <sys/endian.h>
 #endif
 
