--- tests/test_base64.c.orig	2019-09-20 13:47:19 UTC
+++ tests/test_base64.c
@@ -1,5 +1,6 @@
 #include "common.h"
 #include "simple_api.h"
+#include <stdio.h> /* for printf() */
 
 
 int main(int argc, char *argv[])
