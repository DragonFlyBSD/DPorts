--- src/generate_events.c.orig	2013-05-02 03:52:31.000000000 +0000
+++ src/generate_events.c
@@ -1,5 +1,6 @@
 /* -*- coding: utf-8 -*- */
 #include <stdio.h>
+#include <sys/select.h>
 /* need stdlib for abs */
 #include <stdlib.h>
 #include <time.h>
