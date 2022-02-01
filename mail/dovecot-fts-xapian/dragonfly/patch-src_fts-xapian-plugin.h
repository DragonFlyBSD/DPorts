--- src/fts-xapian-plugin.h.orig	2021-11-11 18:16:47 UTC
+++ src/fts-xapian-plugin.h
@@ -15,7 +15,7 @@
 #include "module-context.h"
 #include "fts-api-private.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #include <vm/vm_param.h>
