--- pr/include/md/_pth.h.orig	2019-10-15 14:21:38 UTC
+++ pr/include/md/_pth.h
@@ -86,7 +86,7 @@
  */
 #if defined(AIX) || defined(SOLARIS) \
     || defined(LINUX) || defined(__GNU__) || defined(__GLIBC__) \
-    || defined(HPUX) || defined(FREEBSD) \
+    || defined(HPUX) || defined(FREEBSD) || defined(__DragonFly__) \
     || defined(NETBSD) || defined(OPENBSD) || defined(BSDI) \
     || defined(NTO) || defined(DARWIN) \
     || defined(UNIXWARE) || defined(RISCOS)
@@ -116,7 +116,7 @@
     || defined(LINUX) || defined(__GNU__)|| defined(__GLIBC__) \
     || defined(FREEBSD) || defined(NETBSD) || defined(OPENBSD) \
     || defined(BSDI) || defined(UNIXWARE) \
-    || defined(DARWIN)
+    || defined(DARWIN) || defined(__DragonFly__)
 #define PT_NO_SIGTIMEDWAIT
 #endif
 
@@ -133,7 +133,7 @@
 #define PT_PRIO_MIN            sched_get_priority_min(SCHED_OTHER)
 #define PT_PRIO_MAX            sched_get_priority_max(SCHED_OTHER)
 #elif defined(LINUX) || defined(__GNU__) || defined(__GLIBC__) \
-    || defined(FREEBSD)
+    || defined(FREEBSD) || defined(__DragonFly__)
 #define PT_PRIO_MIN            sched_get_priority_min(SCHED_OTHER)
 #define PT_PRIO_MAX            sched_get_priority_max(SCHED_OTHER)
 #elif defined(NTO)
@@ -177,7 +177,7 @@ extern int (*_PT_aix_yield_fcn)();
     || defined(LINUX) || defined(__GNU__) || defined(__GLIBC__) \
     || defined(FREEBSD) || defined(NETBSD) || defined(OPENBSD) \
     || defined(BSDI) || defined(NTO) || defined(DARWIN) \
-    || defined(UNIXWARE) || defined(RISCOS)
+    || defined(UNIXWARE) || defined(RISCOS) || defined(__DragonFly__)
 #define _PT_PTHREAD_YIELD()             sched_yield()
 #else
 #error "Need to define _PT_PTHREAD_YIELD for this platform"
