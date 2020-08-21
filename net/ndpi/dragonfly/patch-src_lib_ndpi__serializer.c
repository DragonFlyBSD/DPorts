--- src/lib/ndpi_serializer.c.orig	2020-07-20 22:46:37 UTC
+++ src/lib/ndpi_serializer.c
@@ -37,7 +37,7 @@
 #include <unistd.h>
 #endif
 
-#if defined __FreeBSD__ || defined __NetBSD__ || defined __OpenBSD__
+#if defined __FreeBSD__ || defined __NetBSD__ || defined __OpenBSD__ || defined __DragonFly__
 #include <sys/endian.h>
 #endif
 
