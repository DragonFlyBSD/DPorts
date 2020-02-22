--- plugin/auth_pam/mapper/pam_user_map.c.intermediate	2020-02-20 18:08:35.000000000 +0000
+++ plugin/auth_pam/mapper/pam_user_map.c
@@ -39,7 +39,7 @@ and usually end up in /var/log/secure fi
 #include <grp.h>
 #include <pwd.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <security/pam_appl.h>
 #else
 #include <security/pam_ext.h>
