--- dbus/dbus-sysdeps-unix.c.intermediate	2024-09-14 17:00:00 UTC
+++ dbus/dbus-sysdeps-unix.c
@@ -60,7 +60,7 @@
 #include <grp.h>
 #include <arpa/inet.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/ucred.h>
 #endif
 
@@ -2367,7 +2367,11 @@ _dbus_read_credentials_socket  (DBusSock
       }
     else
       {
+#ifndef __DragonFly__
         pid_read = cr.cr_pid;
+#else
+        pid_read = 0;
+#endif
         uid_read = cr.cr_uid;
       }
 #elif defined(HAVE_CMSGCRED)
@@ -2489,7 +2493,8 @@ _dbus_read_credentials_socket  (DBusSock
 #if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || \
     defined(__linux__) || \
     defined(__OpenBSD__) || \
-    defined(__NetBSD__)
+    defined(__NetBSD__) || \
+    defined(__DragonFly__)
 # error Credentials passing not working on this OS is a regression!
 #endif
 
