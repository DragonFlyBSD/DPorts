--- src/cookies.c.orig	2020-07-15 14:17:36 UTC
+++ src/cookies.c
@@ -3,6 +3,7 @@
 #include <fcntl.h>
 #include <stddef.h>
 #include <stdio.h>
+#include <stdint.h>
 #include <string.h>
 #include <unistd.h>
 #include <pthread.h>
@@ -64,7 +65,7 @@ cookies_destroy(COOKIES this)
 BOOLEAN
 cookies_add(COOKIES this, char *str, char *host)
 {
-  size_t  id    = pthread_self();
+  size_t  id    = (uintptr_t)pthread_self();
   int     hlen  = 0;
   int     dlen  = 0;
   NODE   *cur   = NULL; 
@@ -176,7 +177,7 @@ cookies_header(COOKIES this, char *host,
   time_t now;
   struct tm tm;
   char   oreo[MAX_COOKIES_SIZE];
-  size_t id = pthread_self();
+  size_t id = (uintptr_t)pthread_self();
 
   memset(oreo, '\0', sizeof oreo);
   hlen = strlen(host);
