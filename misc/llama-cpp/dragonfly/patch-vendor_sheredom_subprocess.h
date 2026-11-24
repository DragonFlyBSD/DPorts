--- vendor/sheredom/subprocess.h.orig
+++ vendor/sheredom/subprocess.h
@@ -1527,9 +1527,15 @@
 #endif
     if (subprocess_option_search_user_path ==
         (options & subprocess_option_search_user_path)) {
+#if defined(__DragonFly__)
+      environ = SUBPROCESS_CONST_CAST(char **, used_environment);
+      execvp(commandLine[0],
+             SUBPROCESS_CONST_CAST(char *const *, commandLine));
+#else
       execvpe(commandLine[0],
               SUBPROCESS_CONST_CAST(char *const *, commandLine),
               SUBPROCESS_CONST_CAST(char *const *, used_environment));
+#endif
     } else {
       execve(commandLine[0],
              SUBPROCESS_CONST_CAST(char *const *, commandLine),
