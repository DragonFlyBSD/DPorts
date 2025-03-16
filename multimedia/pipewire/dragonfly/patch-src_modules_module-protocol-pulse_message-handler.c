--- src/modules/module-protocol-pulse/message-handler.c.orig	2024-03-13 08:22:08 UTC
+++ src/modules/module-protocol-pulse/message-handler.c
@@ -6,7 +6,9 @@
 #include <stdio.h>
 
 #include <regex.h>
+#ifndef __DragonFly__
 #include <malloc.h>
+#endif
 
 #include <spa/param/props.h>
 #include <spa/pod/builder.h>
