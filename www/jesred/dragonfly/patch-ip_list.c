--- ip_list.c.orig	1999-01-23 23:16:11.000000000 +0100
+++ ip_list.c
@@ -96,7 +96,7 @@
  *   re-implementations of code complying to this set of standards.  
  */
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <stddef.h>
 #  include <sys/types.h>
 #endif /* __FreeBSD__ */
