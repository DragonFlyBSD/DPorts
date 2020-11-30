--- src/url.c.orig	2006-05-29 09:09:01 UTC
+++ src/url.c
@@ -12,6 +12,7 @@
 #include <sys/stat.h>
 #include <stdlib.h>
 #include <stdio.h>
+#include <stdint.h>
 #include <string.h>
 #include <unistd.h>
 #include <limits.h>
@@ -1846,8 +1847,8 @@ char *url_to_in_filename(url * urlp)
     pom = _malloc(pomlen);
 
 #ifdef HAVE_MT
-    snprintf(pom, pomlen, "%s/.in_pavuk_nostore_%d_%ld",
-      priv_cfg.cache_dir, (int) getpid(), pthread_self());
+    snprintf(pom, pomlen, "%s/.in_pavuk_nostore_%d_%ju",
+      priv_cfg.cache_dir, (int) getpid(), (uintmax_t)pthread_self());
 #else
     snprintf(pom, pomlen, "%s/.in_pavuk_nostore_%d", priv_cfg.cache_dir,
       (int) getpid());
