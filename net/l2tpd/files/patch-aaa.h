
$FreeBSD: ports/net/l2tpd/files/patch-aaa.h,v 1.2 2012/11/17 06:00:04 svnexp Exp $

--- aaa.h
+++ aaa.h
@@ -46,7 +46,6 @@
 };
 
 extern struct lns *get_lns (struct tunnel *);
-extern struct addr_ent *uaddr[];
 extern unsigned int get_addr (struct iprange *);
 extern void reserve_addr (unsigned int);
 extern void unreserve_addr (unsigned int);
