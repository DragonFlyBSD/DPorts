--- src/helper/UserSession.cpp.orig
+++ src/helper/UserSession.cpp
@@ -39,7 +39,7 @@
 #include <unistd.h>
 #include <fcntl.h>
 #include <sched.h>
-#ifdef Q_OS_FREEBSD
+#if defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
 #include <sys/consio.h>
 #include <sys/kbio.h>
 #include <termios.h>
@@ -235,7 +235,7 @@
                 VirtualTerminal::jumpToVt(vtNumber, true);
         }
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         if (waylandUserSession) {
             Q_ASSERT(takeControl);
 
@@ -309,7 +309,7 @@
             exit(Auth::HELPER_OTHER_ERROR);
         }
 
-#if defined(Q_OS_FREEBSD)
+#if defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
         // execve() uses the environment prepared in Backend::openSession(),
         // therefore environment variables which are set here are ignored.
         if (setusercontext(NULL, &pw, pw.pw_uid, LOGIN_SETALL) != 0) {
