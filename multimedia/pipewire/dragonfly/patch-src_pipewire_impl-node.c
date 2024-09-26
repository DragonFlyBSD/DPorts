--- src/pipewire/impl-node.c.orig	2024-09-21 16:54:27.954124000 +0200
+++ src/pipewire/impl-node.c	2024-09-21 16:54:50.084527000 +0200
@@ -8,7 +8,9 @@
 #include <unistd.h>
 #include <errno.h>
 #include <time.h>
+#ifndef __DragonFly__
 #include <malloc.h>
+#endif
 #include <limits.h>
 
 #include <spa/support/system.h>
