--- bootloader/src/main.c.orig
+++ bootloader/src/main.c
@@ -22,7 +22,7 @@
     #include <windows.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     #include <floatingpoint.h>
 #endif
 
@@ -77,7 +77,7 @@
 int
 main(int argc, char **argv)
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     /* PEP-754 requires that FP exceptions run in "no stop" mode by default,
      * and until C vendors implement C99's ways to control FP exceptions,
      * Python requires non-stop mode.  Alas, some platforms enable FP
