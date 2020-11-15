--- src/lib/ecore/ecore_exe_posix.c.orig	2020-06-17 07:47:44 UTC
+++ src/lib/ecore/ecore_exe_posix.c
@@ -1002,7 +1002,7 @@ _ecore_exe_exec_it(const char     *exe_c
      {
         prctl(PR_SET_PDEATHSIG, SIGTERM);
      }
-#elif defined(HAVE_PROCCTL)
+#elif defined(HAVE_PROCCTL) && defined(PROC_PDEATHSIG_CTL)
    if ((flags & ECORE_EXE_TERM_WITH_PARENT))
      {
         int sig = SIGTERM;
