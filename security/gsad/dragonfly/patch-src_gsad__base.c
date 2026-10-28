--- src/gsad_base.c.orig
+++ src/gsad_base.c
@@ -16,7 +16,7 @@
 #include <libxml/parser.h> /* for xmlHasFeature() */
 #include <string.h>        /* for strlen() */
 #include <sys/param.h>
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 
