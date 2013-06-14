
$FreeBSD: net-mgmt/flowd/files/patch-flowd.h 300897 2012-07-14 14:29:18Z beat $

--- flowd.h.orig
+++ flowd.h
@@ -34,7 +34,7 @@
 
 #define DEFAULT_CONFIG			SYSCONFDIR "/flowd.conf"
 #define DEFAULT_PIDFILE			PIDFILEDIR "/flowd.pid"
-#define PRIVSEP_USER			"_flowd"
+#define PRIVSEP_USER			"%%FLOWD_USER%%"
 
 /* Initial stateholding limits */
 /* XXX these are not actually tunable yet */
