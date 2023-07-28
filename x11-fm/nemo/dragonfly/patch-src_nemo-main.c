--- src/nemo-main.c.orig	2022-07-21 09:11:39 UTC
+++ src/nemo-main.c
@@ -44,7 +44,7 @@
 #ifdef HAVE_LOCALE_H
 #include <locale.h>
 #endif
-#ifdef HAVE_MALLOC_H
+#if HAVE_MALLOC_H
 #include <malloc.h>
 #endif
 #include <stdlib.h>
