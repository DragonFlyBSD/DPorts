--- cont.c.orig	2019-01-14 09:23:45 UTC
+++ cont.c
@@ -758,7 +758,7 @@ fiber_entry(void *arg)
  * if MAP_STACK is passed.
  * http://www.FreeBSD.org/cgi/query-pr.cgi?pr=158755
  */
-#if defined(MAP_STACK) && !defined(__FreeBSD__) && !defined(__FreeBSD_kernel__)
+#if defined(MAP_STACK) && !defined(__FreeBSD__) && !defined(__FreeBSD_kernel__) && !defined(__DragonFly__)
 #define FIBER_STACK_FLAGS (MAP_PRIVATE | MAP_ANON | MAP_STACK)
 #else
 #define FIBER_STACK_FLAGS (MAP_PRIVATE | MAP_ANON)
