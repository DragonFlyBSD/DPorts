--- dbus/dbus-sysdeps-unix.c.intermediate	2021-07-07 10:41:56 UTC
+++ dbus/dbus-sysdeps-unix.c
@@ -4469,7 +4469,7 @@ _dbus_socket_can_pass_unix_fd (DBusSocke
 void
 _dbus_close_all (void)
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   closefrom(3);
 #else
 #error Expected to be FreeBSD with closefrom()
