--- pop_lib.c.orig	2010-08-24 16:34:21 UTC
+++ pop_lib.c
@@ -32,6 +32,7 @@
 #include <unistd.h>
 #include <ctype.h>
 #include <netdb.h>
+#include <netinet/in.h>
 
 /* given an POP mailbox name, return host, port, username and password */
 int pop_parse_path (const char* path, ACCOUNT* acct)
