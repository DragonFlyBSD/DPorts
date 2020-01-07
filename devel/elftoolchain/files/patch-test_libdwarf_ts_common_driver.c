--- test/libdwarf/ts/common/driver.c.orig	2011-11-09 08:43:56 UTC
+++ test/libdwarf/ts/common/driver.c
@@ -36,7 +36,7 @@
 #include <string.h>
 #include <err.h>
 #include <unistd.h>
-#ifdef	__FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <bsdxml.h>
 #else
 #include <expat.h>
