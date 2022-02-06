--- src/lib/fcitx-utils/misc.cpp.orig	2021-12-04 15:43:05 UTC
+++ src/lib/fcitx-utils/misc.cpp
@@ -16,7 +16,7 @@
 #include <kvm.h>
 #include <sys/param.h>
 #include <sys/sysctl.h>
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/user.h>
 #endif
 #elif defined(__APPLE__)
@@ -95,6 +95,8 @@ std::string getProcessName(pid_t pid) {
         for (i = 0; i < cnt; i++)
 #if defined(__NetBSD__) || defined(__OpenBSD__)
             if (kp->p_pid == pid)
+#elif defined(__DragonFly__)
+	    if (kp->kp_pid == pid)
 #else
             if (kp->ki_pid == pid)
 #endif
@@ -102,6 +104,8 @@ std::string getProcessName(pid_t pid) {
         if (i != cnt) {
 #if defined(__NetBSD__) || defined(__OpenBSD__)
             result = kp->p_comm;
+#elif defined(__DragonFly__)
+	    result = kp->kp_comm;
 #else
             result = kp->ki_comm;
 #endif
