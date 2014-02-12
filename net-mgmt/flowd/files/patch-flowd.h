
$FreeBSD: head/net-mgmt/flowd/files/patch-flowd.h 340725 2014-01-22 17:40:44Z mat $

--- flowd.h.orig
+++ flowd.h
@@ -34,7 +34,7 @@
 
 #define DEFAULT_CONFIG			SYSCONFDIR "/flowd.conf"
 #define DEFAULT_PIDFILE			PIDFILEDIR "/flowd.pid"
-#define PRIVSEP_USER			"_flowd"
+#define PRIVSEP_USER			"%%FLOWD_USER%%"
 
 /* Initial stateholding limits */
 /* XXX these are not actually tunable yet */
