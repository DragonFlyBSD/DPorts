--- c-posix-signals.c.intermediate	2018-04-24 10:39:01.000000000 +0300
+++ c-posix-signals.c
@@ -224,6 +224,18 @@ int sigs [] = {
 #ifdef SIGXFSZ
    SIGXFSZ,
 #endif
+#ifdef SIGINFO
+   SIGINFO,
+#endif
+#ifdef SIGTHR
+   SIGTHR,
+#endif
+#ifdef SIGCKPT
+   SIGCKPT,
+#endif
+#ifdef SIGCKPTEXIT
+   SIGCKPTEXIT,
+#endif
    0};
 
 char *signames [] = {
@@ -357,6 +369,18 @@ char *signames [] = {
 #ifdef SIGXFSZ
    "SIGXFSZ",
 #endif
+#ifdef SIGINFO
+   "SIGINFO",
+#endif
+#ifdef SIGTHR
+   "SIGTHR",
+#endif
+#ifdef SIGCKPT
+   "SIGCKPT",
+#endif
+#ifdef SIGCKPTEXIT
+   "SIGCKPTEXIT",
+#endif
    "SIGNONE"};
 
 int namedsigs = sizeof (sigs) / sizeof (int);
