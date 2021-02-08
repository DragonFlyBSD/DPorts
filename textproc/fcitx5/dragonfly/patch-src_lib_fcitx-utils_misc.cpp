--- src/lib/fcitx-utils/misc.cpp.orig	2020-12-16 20:24:12 UTC
+++ src/lib/fcitx-utils/misc.cpp
@@ -97,6 +97,8 @@ std::string getProcessName(pid_t pid) {
         for (i = 0; i < cnt; i++)
 #if defined(__NetBSD__) || defined(__OpenBSD__)
             if (kp->p_pid == pid)
+#elif defined(__DragonFly__)
+	    if (kp->kp_pid == pid)
 #else
             if (kp->ki_pid == pid)
 #endif
@@ -104,6 +106,8 @@ std::string getProcessName(pid_t pid) {
         if (i != cnt) {
 #if defined(__NetBSD__) || defined(__OpenBSD__)
             result = kp->p_comm;
+#elif defined(__DragonFly__)
+	    result = kp->kp_comm;
 #else
             result = kp->ki_comm;
 #endif
