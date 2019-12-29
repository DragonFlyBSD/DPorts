--- clish/shell/shell_execute.c.intermediate	2019-12-29 13:31:58.000000000 +0000
+++ clish/shell/shell_execute.c
@@ -19,7 +19,7 @@
 #include <signal.h>
 #include <fcntl.h>
 
-#if !defined(__XSI_VISIBLE)
+#if !defined(__XSI_VISIBLE) || defined(__DragonFly__)
 /* Empty signal handler to ignore signal but don't use SIG_IGN. */
 static void sigignore(int signo)
 {
