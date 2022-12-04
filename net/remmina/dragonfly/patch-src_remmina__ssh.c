--- src/remmina_ssh.c.orig	2022-12-04 13:06:15 UTC
+++ src/remmina_ssh.c
@@ -41,8 +41,10 @@
 /* To get definitions of NI_MAXHOST and NI_MAXSERV from <netdb.h> */
 #define _DEFAULT_SOURCE
 
+#ifndef __DragonFly__
 /* Define this before stdlib.h to have posix_openpt */
 #define _XOPEN_SOURCE 600
+#endif
 
 #include <errno.h>
 #define LIBSSH_STATIC 1
