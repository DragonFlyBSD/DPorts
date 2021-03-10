--- gsad/src/gsad_base.c.orig	2021-02-02 12:05:04 UTC
+++ gsad/src/gsad_base.c
@@ -29,7 +29,7 @@
 #include <libxml/parser.h> /* for xmlHasFeature() */
 #include <string.h>        /* for strlen() */
 #include <sys/param.h>
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 
