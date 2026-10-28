--- usr/sbin/pkcstok_migrate/pkcstok_migrate.c.orig	2026-10-26 02:22:43 UTC
+++ usr/sbin/pkcstok_migrate/pkcstok_migrate.c
@@ -20,7 +20,7 @@
 #include <errno.h>
 #include <getopt.h>
 #include <memory.h>
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <linux/limits.h>
 #else
 #include <limits.h>
