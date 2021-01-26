--- src/lib/ecore/efl_exe.c.orig	2021-01-26 00:11:13.995849000 +0100
+++ src/lib/ecore/efl_exe.c	2021-01-25 23:59:58.582943000 +0100
@@ -32,7 +32,7 @@
 #  include <sys/wait.h>
 # endif
 # ifndef HAVE_CLEARENV
-#  if defined (__FreeBSD__) || defined (__OpenBSD__)
+#  if defined (__FreeBSD__) || defined (__OpenBSD__) || defined (__DragonFly__)
 #   include <dlfcn.h>
 static char ***_dl_environ;
 #  else
@@ -153,7 +153,7 @@
 # ifdef HAVE_PRCTL
    if (task_flags & EFL_TASK_FLAGS_EXIT_WITH_PARENT)
      prctl(PR_SET_PDEATHSIG, SIGTERM);
-#elif defined(HAVE_PROCCTL)
+#elif defined(HAVE_PROCCTL) && defined(PROC_PDEATHSIG_CTL)
    if (task_flags & EFL_TASK_FLAGS_EXIT_WITH_PARENT)
      {
         int sig = SIGTERM;
@@ -577,7 +577,7 @@
 
    // clear systemd notify socket... only relevant for systemd world,
    // otherwise shouldn't be trouble
-# if defined (__FreeBSD__) || defined (__OpenBSD__)
+# if defined (__FreeBSD__) || defined (__OpenBSD__) || defined (__DragonFly__)
    _dl_environ = dlsym(NULL, "environ");
    if (_dl_environ) env = *_dl_environ;
 # else
@@ -620,7 +620,7 @@
           }
         // yes - we dont free itr or itr2 - we're going to exec below or exit
         // also put newenv array on stack pointign to the strings in the env
-# if defined (__FreeBSD__) || defined (__OpenBSD__)
+# if defined (__FreeBSD__) || defined (__OpenBSD__) || defined (__DragonFly__)
         if (_dl_environ) *_dl_environ = newenv;
         else ERR("Can't find envrion symbol");
 # else
@@ -637,7 +637,7 @@
      {
         prctl(PR_SET_PDEATHSIG, SIGTERM);
      }
-# elif defined(HAVE_PROCCTL)
+# elif defined(HAVE_PROCCTL) && defined(PROC_PDEATHSIG_CTL)
    if ((pd->flags & EFL_EXE_FLAGS_TERM_WITH_PARENT))
      {
         int sig = SIGTERM;
