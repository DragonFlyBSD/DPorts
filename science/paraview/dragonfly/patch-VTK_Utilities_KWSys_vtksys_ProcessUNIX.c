--- VTK/Utilities/KWSys/vtksys/ProcessUNIX.c.orig
+++ VTK/Utilities/KWSys/vtksys/ProcessUNIX.c
@@ -2486,7 +2486,7 @@
    Here we define the command to call on each platform and the
    corresponding parsing format string.  The parsing format should
    have two integers to store: the pid and then the ppid.  */
-#if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) ||       \
+#if defined(__linux__) || defined(__APPLE__) || (defined(__FreeBSD__)||defined(__DragonFly__)) ||       \
   defined(__OpenBSD__) || defined(__GLIBC__) || defined(__GNU__)
 #  define KWSYSPE_PS_COMMAND "ps axo pid,ppid"
 #  define KWSYSPE_PS_FORMAT "%d %d\n"
