--- dbus/dbus-sysdeps-unix.c.orig
+++ dbus/dbus-sysdeps-unix.c
@@ -2378,7 +2378,7 @@ _dbus_read_credentials_socket  (DBusSocket client_fd,
         pid_read = cr.unp_pid;
         uid_read = cr.unp_euid;
       }
-#elif defined(LOCAL_PEERCRED)
+#elif defined(LOCAL_PEERCRED) && !defined(__DragonFly__)
     struct xucred cr;
     socklen_t cr_len = sizeof (cr);
 
@@ -2513,6 +2513,7 @@ _dbus_read_credentials_socket  (DBusSocket client_fd,
     defined(__linux__) || \
     defined(__OpenBSD__) || \
-    defined(__NetBSD__)
+    defined(__NetBSD__) || \
+    defined(__DragonFly__)
 # error Credentials passing not working on this OS is a regression!
 #endif
 
