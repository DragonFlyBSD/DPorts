--- libconsolekit/sd-compat.c.orig
+++ libconsolekit/sd-compat.c
@@ -425,8 +425,15 @@
 int sd_login_monitor_flush(sd_login_monitor *monitor)
 {
 	struct kevent e;
-	EV_SET(&e, 0, EVFILT_USER, EV_CLEAR, 0, 0, NULL);
-	if (kevent(monitor->kq, &e, 1, 0, 0, 0) == -1)
+	struct timespec ts = { 0, 0 };
+
+	/*
+	 * Re-registering with EV_CLEAR resets the trigger but leaves the
+	 * event queued, so the kqueue stays readable and callers polling
+	 * it spin.  Read the event out instead (EV_CLEAR from sd_login_
+	 * monitor_new resets it on retrieval).
+	 */
+	if (kevent(monitor->kq, NULL, 0, &e, 1, &ts) == -1)
 		return -(errno);
 	return 0;
 }
