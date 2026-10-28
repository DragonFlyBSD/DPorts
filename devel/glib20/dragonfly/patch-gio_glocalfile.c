--- gio/glocalfile.c.orig
+++ gio/glocalfile.c
@@ -1278,7 +1278,7 @@
  * https://docs.oracle.com/cd/E86824_01/html/E54765/faccessat-2.html
  */
 #if defined(HAVE_FACCESSAT) && !defined(__FreeBSD__) && !defined(__ANDROID__) && \
-    !defined(__OpenBSD__) && !defined(__sun__)
+    !defined(__OpenBSD__) && !defined(__sun__) && !defined(__DragonFly__)
 static gboolean
 g_local_file_query_exists (GFile        *file,
                            GCancellable *cancellable)
@@ -3280,7 +3280,7 @@
   iface->monitor_file = g_local_file_monitor_file;
   iface->measure_disk_usage = g_local_file_measure_disk_usage;
 #if defined(HAVE_FACCESSAT) && !defined(__FreeBSD__) && !defined(__ANDROID__) && \
-    !defined(__OpenBSD__) && !defined(__sun__)
+    !defined(__OpenBSD__) && !defined(__sun__) && !defined(__DragonFly__)
   iface->query_exists = g_local_file_query_exists;
 #endif
 
