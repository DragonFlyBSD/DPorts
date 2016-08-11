--- src/pam_mount.c.intermediate	2016-08-11 14:53:21 UTC
+++ src/pam_mount.c
@@ -39,7 +39,7 @@
 
 #if defined(__OpenBSD__) || defined(__NetBSD__) || defined(__APPLE__)
 #	define CONFIGFILE "/etc/pam_mount.conf.xml"
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #  define CONFIGFILE "%%PREFIX%%/etc/security/pam_mount.conf.xml"
 #else
 #	define CONFIGFILE "/etc/security/pam_mount.conf.xml"
