--- util.h.orig	2019-05-06 03:32:04 UTC
+++ util.h
@@ -48,8 +48,10 @@
 #endif
 
 #ifndef BFS_HAS_SYS_ACL
+#ifndef __DragonFly__
 #	define BFS_HAS_SYS_ACL BFS_HAS_INCLUDE(<sys/acl.h>, true)
 #endif
+#endif
 
 #ifndef BFS_HAS_SYS_CAPABILITY
 #	define BFS_HAS_SYS_CAPABILITY BFS_HAS_INCLUDE(<sys/capability.h>, __linux__)
