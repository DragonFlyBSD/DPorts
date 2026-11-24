--- lprps.c.orig
+++ lprps.c
@@ -357,7 +357,7 @@
 char *strsignal(n)
 int n;
 {
-# if !(defined(BSD) && (BSD >= 199103))
+# if !(defined(BSD) && (BSD >= 199103)) && !defined(__DragonFly__)
   extern char *sys_siglist[];
 # endif
   static char buf[32];
