Use bundled sys/tree.h implementation, ours is not compatible.

--- sx_slentry.h.orig	2016-10-14 18:55:28.000000000 +0300
+++ sx_slentry.h
@@ -7,7 +7,7 @@
 #include "sys_queue.h"
 #endif
 
-#if HAVE_SYS_TREE_H
+#if HAVE_SYS_TREE_H && !defined(__DragonFly__)
 #include <sys/tree.h>
 #else
 #include "sys_tree.h"
