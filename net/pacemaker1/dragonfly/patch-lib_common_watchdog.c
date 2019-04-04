--- lib/common/watchdog.c.orig	2018-07-11 16:30:29 UTC
+++ lib/common/watchdog.c
@@ -95,6 +95,14 @@ sysrq_trigger(char t)
     return;
 }
 
+#ifdef __DragonFly__
+/* XXX */
+static int sigqueue(pid_t pid, int signal, union sigval sigvalue)
+{
+  return -1;
+}
+#endif
+
 
 static void
 pcmk_panic_local(void) 
