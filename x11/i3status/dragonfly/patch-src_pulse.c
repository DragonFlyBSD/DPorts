--- src/pulse.c.intermediate	2019-08-31 05:10:59.000000000 +0000
+++ src/pulse.c
@@ -1,4 +1,4 @@
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 // vim:ts=4:sw=4:expandtab
 #include <config.h>
 #include <string.h>
