
$FreeBSD: ports/net-mgmt/ndpmon/files/patch-parser.c,v 1.4 2012/11/17 06:00:34 svnexp Exp $

--- parser.c.orig
+++ parser.c
@@ -77,8 +77,8 @@
 		write_proc("/proc/sys/net/ipv6/conf/all/accept_ra_defrtr",flag);
 		write_proc("/proc/sys/net/ipv6/conf/all/accept_ra_pinfo",flag);
 		write_proc("/proc/sys/net/ipv6/conf/all/accept_redirects",flag);
-	}
 #endif
+	}
 	xmlXPathFreeObject (xmlobject);
 	return;
 }
