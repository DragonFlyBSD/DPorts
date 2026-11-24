--- tools/ck-get-x11-display-device.c.orig
+++ tools/ck-get-x11-display-device.c
@@ -216,7 +216,7 @@
 
 #if defined(__NetBSD__)
         display = g_strdup_printf ("/dev/ttyE%ld", vt - 1);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
         display = g_strdup_printf ("/dev/ttyv%ld", vt - 1);
 #elif defined(__OpenBSD__)
         display = g_strdup_printf ("/dev/ttyC%ld", vt - 1);
@@ -275,17 +275,19 @@
                 ret = 0;
                 res = ck_get_socket_peer_credentials (fd, &pid, NULL, NULL);
                 if (res) {
+                        device = NULL;
+                        /* no peer pid on DragonFly (xucred has no cr_pid) */
                         if (pid > 0) {
                                 device = get_tty_for_pid (pid);
+                        }
 
-                                if (device == NULL) {
-                                        device = get_tty_for_display (xdisplay);
-                                }
+                        if (device == NULL) {
+                                device = get_tty_for_display (xdisplay);
+                        }
 
-                                if (device != NULL) {
-                                        printf ("%s\n", device);
-                                        g_free (device);
-                                }
+                        if (device != NULL) {
+                                printf ("%s\n", device);
+                                g_free (device);
                         }
                 }
         }
