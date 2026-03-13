--- pr/src/pthreads/ptio.c.orig	Tue Apr  8 09:40:19 2025
+++ pr/src/pthreads/ptio.c	Tue Apr
@@ -190,7 +190,7 @@ static PRBool _pr_ipv6_v6only_on_by_default;
       defined(HPUX10_30) || defined(HPUX11) || defined(LINUX) ||    \
       defined(__GNU__) || defined(__GLIBC__) || defined(FREEBSD) || \
       defined(NETBSD) || defined(OPENBSD) || defined(NTO) ||        \
-      defined(DARWIN) || defined(RISCOS)
+      defined(DARWIN) || defined(RISCOS) || defined(__DragonFly__)
 #    define _PRSelectFdSetArg_t fd_set*
 #  else
 #    error "Cannot determine architecture"
@@ -3276,7 +3276,7 @@ static PRIOMethods _pr_socketpollfd_methods = {
 #  if defined(HPUX) || defined(SOLARIS) || defined(LINUX) ||     \
       defined(__GNU__) || defined(__GLIBC__) || defined(AIX) ||  \
       defined(FREEBSD) || defined(NETBSD) || defined(OPENBSD) || \
-      defined(NTO) || defined(DARWIN) || defined(RISCOS)
+      defined(NTO) || defined(DARWIN) || defined(RISCOS) || defined(__DragonFly__)
 #    define _PR_FCNTL_FLAGS O_NONBLOCK
 #  else
 #    error "Can't determine architecture"
