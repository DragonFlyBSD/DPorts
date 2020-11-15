--- src/lib/ecore/efl_exe.c.orig	2020-06-17 07:47:44 UTC
+++ src/lib/ecore/efl_exe.c
@@ -32,7 +32,7 @@
 #  include <sys/wait.h>
 # endif
 # ifndef HAVE_CLEARENV
-#  if defined (__FreeBSD__) || defined (__OpenBSD__)
+#  if defined (__FreeBSD__) || defined (__OpenBSD__) || defined(__DragonFly__)
 #   include <dlfcn.h>
 static char ***_dl_environ;
 #  else
@@ -153,7 +153,7 @@ _exec(const char *cmd, Efl_Exe_Flags fla
 # ifdef HAVE_PRCTL
    if (task_flags & EFL_TASK_FLAGS_EXIT_WITH_PARENT)
      prctl(PR_SET_PDEATHSIG, SIGTERM);
-#elif defined(HAVE_PROCCTL)
+#elif defined(HAVE_PROCCTL) && defined(PROC_PDEATHSIG_CTL)
    if (task_flags & EFL_TASK_FLAGS_EXIT_WITH_PARENT)
      {
         int sig = SIGTERM;
@@ -531,7 +531,7 @@ _efl_exe_efl_task_run(Eo *obj, Efl_Exe_D
 # ifdef HAVE_CLEARENV
         clearenv();
 # else
-#  if defined (__FreeBSD__) || defined (__OpenBSD__)
+#  if defined (__FreeBSD__) || defined (__OpenBSD__) || defined(__DragonFly__)
         _dl_environ = dlsym(NULL, "environ");
         if (_dl_environ) *_dl_environ = NULL;
         else ERR("Can't find envrion symbol");
@@ -558,7 +558,7 @@ _efl_exe_efl_task_run(Eo *obj, Efl_Exe_D
      {
         prctl(PR_SET_PDEATHSIG, SIGTERM);
      }
-#elif defined(HAVE_PROCCTL)
+#elif defined(HAVE_PROCCTL) && defined(PROC_PDEATHSIG_CTL)
    if ((pd->flags & EFL_EXE_FLAGS_TERM_WITH_PARENT))
      {
         int sig = SIGTERM;
