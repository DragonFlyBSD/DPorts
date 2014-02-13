
$FreeBSD: head/net-mgmt/ndpmon/files/patch-parser.c 340725 2014-01-22 17:40:44Z mat $

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
