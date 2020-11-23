--- lib/cryptpass.c.orig	2008-12-15 08:03:24 UTC
+++ lib/cryptpass.c
@@ -24,6 +24,7 @@
 
 #include <stdio.h>
 #include <stdlib.h>
+#include <arpa/inet.h>
 
 #include <radlib.h>
 
