
$FreeBSD: ports/net-mgmt/flowd/files/patch-flowd.h,v 1.2 2012/11/17 06:00:32 svnexp Exp $

--- flowd.h.orig
+++ flowd.h
@@ -34,7 +34,7 @@
 
 #define DEFAULT_CONFIG			SYSCONFDIR "/flowd.conf"
 #define DEFAULT_PIDFILE			PIDFILEDIR "/flowd.pid"
-#define PRIVSEP_USER			"_flowd"
+#define PRIVSEP_USER			"%%FLOWD_USER%%"
 
 /* Initial stateholding limits */
 /* XXX these are not actually tunable yet */
