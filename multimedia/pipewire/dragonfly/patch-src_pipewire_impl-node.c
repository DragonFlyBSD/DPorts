--- src/pipewire/impl-node.c.orig	2023-10-06 09:37:06 UTC
+++ src/pipewire/impl-node.c
@@ -8,7 +8,9 @@
 #include <unistd.h>
 #include <errno.h>
 #include <time.h>
+#ifndef __DragonFly__
 #include <malloc.h>
+#endif
 
 #include <spa/support/system.h>
 #include <spa/pod/parser.h>
