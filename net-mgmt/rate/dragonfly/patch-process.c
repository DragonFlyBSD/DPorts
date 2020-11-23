--- process.c.orig	2003-08-20 14:31:52 UTC
+++ process.c
@@ -23,6 +23,9 @@
 #include <sys/timeb.h>
 #include <assert.h>
 #include <netdb.h>
+#include <arpa/inet.h>
+#include <stdio.h>
+#include <stdlib.h>
 #include "lib.h"
 #include "util.h"
 #include "sta.h"
