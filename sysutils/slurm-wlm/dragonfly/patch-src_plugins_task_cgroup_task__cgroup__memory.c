--- src/plugins/task/cgroup/task_cgroup_memory.c.orig	2019-04-12 04:20:25 UTC
+++ src/plugins/task/cgroup/task_cgroup_memory.c
@@ -51,7 +51,7 @@
 
 #include "task_cgroup.h"
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #define POLLRDHUP POLLHUP
 #else
 #include <sys/eventfd.h>
@@ -409,7 +409,7 @@ static int memcg_initialize (xcgroup_ns_
 	return 0;
 }
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 
 static int _register_oom_notifications(char *ignored)
 {
