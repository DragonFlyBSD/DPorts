--- pr/include/md/_pth.h.orig	Mon Oct 21 11:31:57 2024
+++ pr/include/md/_pth.h	Tue Apr
@@ -63,7 +63,7 @@
  */
 #if defined(AIX) || defined(SOLARIS) \
     || defined(LINUX) || defined(__GNU__) || defined(__GLIBC__) \
-    || defined(HPUX) || defined(FREEBSD) \
+    || defined(HPUX) || defined(FREEBSD) || defined(__DragonFly__) \
     || defined(NETBSD) || defined(OPENBSD) \
     || defined(NTO) || defined(DARWIN) \
     || defined(RISCOS)
@@ -92,7 +92,7 @@
 #if (defined(AIX) && !defined(AIX4_3_PLUS)) \
     || defined(LINUX) || defined(__GNU__)|| defined(__GLIBC__) \
     || defined(FREEBSD) || defined(NETBSD) || defined(OPENBSD) \
-    || defined(DARWIN)
+    || defined(DARWIN) || defined(__DragonFly__)
 #define PT_NO_SIGTIMEDWAIT
 #endif
 
@@ -109,7 +109,7 @@
 #define PT_PRIO_MIN            sched_get_priority_min(SCHED_OTHER)
 #define PT_PRIO_MAX            sched_get_priority_max(SCHED_OTHER)
 #elif defined(LINUX) || defined(__GNU__) || defined(__GLIBC__) \
-    || defined(FREEBSD)
+    || defined(FREEBSD) || defined(__DragonFly__)
 #define PT_PRIO_MIN            sched_get_priority_min(SCHED_OTHER)
 #define PT_PRIO_MAX            sched_get_priority_max(SCHED_OTHER)
 #elif defined(NTO)
@@ -153,7 +153,7 @@ extern int (*_PT_aix_yield_fcn)();
     || defined(LINUX) || defined(__GNU__) || defined(__GLIBC__) \
     || defined(FREEBSD) || defined(NETBSD) || defined(OPENBSD) \
     || defined(NTO) || defined(DARWIN) \
-    || defined(RISCOS)
+        || defined(RISCOS) || defined(DRAGONFLY)
 #define _PT_PTHREAD_YIELD()             sched_yield()
 #else
 #error "Need to define _PT_PTHREAD_YIELD for this platform"
