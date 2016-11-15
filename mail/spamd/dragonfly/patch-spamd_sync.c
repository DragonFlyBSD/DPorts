--- spamd/sync.c.orig	2010-04-24 13:33:47.000000000 +0300
+++ spamd/sync.c
@@ -40,6 +40,8 @@
 #include <unistd.h>
 #ifdef __OpenBSD__
 #include <sha1.h>
+#elif defined(__DragonFly__)
+#include "sha1hl_compat.h"
 #else
 /* Stolen from sha.h */
 extern char   *SHA1_File(const char *, char *);
