--- pr/include/md/_pth.h.orig	2026-05-05 12:48:55 UTC
+++ pr/include/md/_pth.h
@@ -62,7 +62,7 @@
  */
 #if defined(AIX) || defined(SOLARIS) \
     || defined(LINUX) || defined(__GNU__) || defined(__GLIBC__) \
-    || defined(FREEBSD) || defined(NETBSD) || defined(OPENBSD) \
+    || defined(FREEBSD) || defined(__DragonFly__) || defined(NETBSD) || defined(OPENBSD) \
     || defined(NTO) || defined(DARWIN) \
     || defined(RISCOS)
 #define _PT_PTHREAD_INVALIDATE_THR_HANDLE(t)  (t) = 0
@@ -90,7 +90,7 @@
 #if (defined(AIX) && !defined(AIX4_3_PLUS)) \
     || defined(LINUX) || defined(__GNU__)|| defined(__GLIBC__) \
     || defined(FREEBSD) || defined(NETBSD) || defined(OPENBSD) \
-    || defined(DARWIN)
+    || defined(DARWIN) || defined(__DragonFly__)
 #define PT_NO_SIGTIMEDWAIT
 #endif
 
@@ -103,7 +103,7 @@
 #define PT_PRIO_MIN            DEFAULT_PRIO
 #define PT_PRIO_MAX            DEFAULT_PRIO
 #elif defined(LINUX) || defined(__GNU__) || defined(__GLIBC__) \
-    || defined(FREEBSD)
+    || defined(FREEBSD) || defined(__DragonFly__)
 #define PT_PRIO_MIN            sched_get_priority_min(SCHED_OTHER)
 #define PT_PRIO_MAX            sched_get_priority_max(SCHED_OTHER)
 #elif defined(NTO)
@@ -145,7 +145,7 @@ extern int (*_PT_aix_yield_fcn)();
 #define _PT_PTHREAD_YIELD()         (*_PT_aix_yield_fcn)()
 #elif defined(SOLARIS) \
     || defined(LINUX) || defined(__GNU__) || defined(__GLIBC__) \
-    || defined(FREEBSD) || defined(NETBSD) || defined(OPENBSD) \
+    || defined(FREEBSD) || defined(__DragonFly__) || defined(NETBSD) || defined(OPENBSD) \
     || defined(NTO) || defined(DARWIN) \
     || defined(RISCOS)
 #define _PT_PTHREAD_YIELD()             sched_yield()
