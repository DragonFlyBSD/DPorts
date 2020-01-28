--- util.h.orig	2020-01-09 15:14:40 UTC
+++ util.h
@@ -48,16 +48,20 @@
 #endif
 
 #ifndef BFS_HAS_SYS_ACL
+#ifndef __DragonFly__
 #	define BFS_HAS_SYS_ACL BFS_HAS_INCLUDE(<sys/acl.h>, true)
 #endif
+#endif
 
 #ifndef BFS_HAS_SYS_CAPABILITY
 #	define BFS_HAS_SYS_CAPABILITY BFS_HAS_INCLUDE(<sys/capability.h>, __linux__)
 #endif
 
 #ifndef BFS_HAS_SYS_EXTATTR
+#ifndef __DragonFly__
 #	define BFS_HAS_SYS_EXTATTR BFS_HAS_INCLUDE(<sys/extattr.h>, __FreeBSD__)
 #endif
+#endif
 
 #ifndef BFS_HAS_SYS_MKDEV
 #	define BFS_HAS_SYS_MKDEV BFS_HAS_INCLUDE(<sys/mkdev.h>, false)
