--- tools/klee-replay/klee-replay.c.orig	2020-03-03 16:03:44 UTC
+++ tools/klee-replay/klee-replay.c
@@ -22,7 +22,7 @@
 #include <time.h>
 #include <unistd.h>
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <signal.h>
 #define fgetc_unlocked(x) fgetc (x)
 #define fputc_unlocked(x,y) fputc (x,y)
@@ -185,7 +185,7 @@ static void run_monitored(char *executab
      * do this, because later on we might want to kill pid _and_ all processes
      * spawned by it and its descendants.
      */
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
     setpgrp();
 #else
     setpgrp(0, 0);
