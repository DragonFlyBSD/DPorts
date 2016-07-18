NOTE: DragonFly is missing sigqueue(2) so the best
I can do is to return -EPERM.

--- lib/common/watchdog.c.orig	2016-01-14 23:43:08.000000000 +0200
+++ lib/common/watchdog.c
@@ -101,6 +101,13 @@ sysrq_trigger(char t)
     return;
 }
 
+#ifdef __DragonFly__
+/* XXX sigqueue() dummy */
+static inline sigqueue(pid_t a, int b, const union sigval c)
+{
+    return -EPERM;
+}
+#endif
 
 static void
 pcmk_panic_local(void) 
