A label before a declaration is C23; base gcc 8 rejects it.

--- src/camel/camel-debug.c.orig	2025-04-11 07:10:21 UTC
+++ src/camel/camel-debug.c
@@ -1074,7 +1074,7 @@
 	mlink = NULL;
 	lt = lines_tolerance;
 	do {
-  try_next_frame:
+  try_next_frame: ;
 		gboolean found = FALSE;
 		BacktraceLine *fline = flink->data;
 
