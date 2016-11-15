--- spamd/grey.h.orig	2010-10-30 14:47:53.000000000 +0000
+++ spamd/grey.h
@@ -21,7 +21,7 @@
 #define GREYEXP (60 * 60 * 4) /* remove grey entries after 4 hours */
 #define WHITEEXP (60 * 60 * 24 * 36) /* remove white entries after 36 days */
 #define TRAPEXP (60 * 60 * 24) /* hitting a spamtrap blacklists for a day */
-#define PATH_PFCTL "/sbin/pfctl"
+#define PATH_PFCTL "/usr/sbin/pfctl"
 #define PATH_SPAMD_ALLOWEDDOMAINS "/usr/local/etc/spamd/spamd.alloweddomains"
 #define DB_SCAN_INTERVAL 60
 #define DB_TRAP_INTERVAL 60 * 10
