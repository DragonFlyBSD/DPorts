--- src/helper/Backend.cpp.orig
+++ src/helper/Backend.cpp
@@ -29,7 +29,7 @@
 
 #include <pwd.h>
 
-#if defined(Q_OS_FREEBSD)
+#if defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
 #include <sys/types.h>
 #include <login_cap.h>
 #endif
@@ -68,7 +68,7 @@
             env.insert(QStringLiteral("SHELL"), QString::fromLocal8Bit(pw->pw_shell));
             env.insert(QStringLiteral("USER"), QString::fromLocal8Bit(pw->pw_name));
             env.insert(QStringLiteral("LOGNAME"), QString::fromLocal8Bit(pw->pw_name));
-#if defined(Q_OS_FREEBSD)
+#if defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
         /* get additional environment variables via setclassenvironment();
             this needs to be done here instead of in UserSession::setupChildProcess
             as the environment for execve() is prepared here
