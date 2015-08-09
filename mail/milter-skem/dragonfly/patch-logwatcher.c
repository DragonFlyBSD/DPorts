--- logwatcher.c.orig	2004-07-14 05:10:12 UTC
+++ logwatcher.c
@@ -129,7 +129,7 @@ skem_logwatch(void *input /* unused */)
 			regerror(result, &lp, buf, sizeof buf);
 			syslog(LOG_ERR, "Internal error in regex-functionality: "
 			    "%d: %s", result, buf);
-			if (result == REG_ASSERT) {
+			{
 				mi_stop_milters(MILTER_ABRT);
 				return NULL;
 			}
