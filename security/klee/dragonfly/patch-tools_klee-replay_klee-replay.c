--- tools/klee-replay/klee-replay.c.orig	2019-03-19 16:49:16 UTC
+++ tools/klee-replay/klee-replay.c
@@ -23,7 +23,7 @@
 
 #include <sys/wait.h>
 
-#if defined(__APPLE__)
+#if defined(__APPLE__) || defined(__DragonFly__)
 #include <signal.h>
 #define fgetc_unlocked(x) fgetc (x)
 #define fputc_unlocked(x,y) fputc (x,y)
@@ -185,7 +185,11 @@ static void run_monitored(char *executab
      * do this, because later on we might want to kill pid _and_ all processes
      * spawned by it and its descendants.
      */
+#ifdef __DragonFly__
+    setpgrp(0, getpid()); /* XXX */
+#else
     setpgrp();
+#endif
 
     if (!rootdir) {
       execv(executable, argv);
