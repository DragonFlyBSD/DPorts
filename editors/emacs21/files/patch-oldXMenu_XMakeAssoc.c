
$FreeBSD: editors/emacs21/files/patch-oldXMenu_XMakeAssoc.c 327953 2013-09-23 08:46:16Z ashish $

--- oldXMenu/XMakeAssoc.c.orig
+++ oldXMenu/XMakeAssoc.c
@@ -37,7 +37,7 @@
  * meaningless (but cause no problems).  The queue in each association
  * bucket is sorted (lowest XId to highest XId).
  */
-XMakeAssoc(dpy, table, x_id, data)
+void XMakeAssoc(dpy, table, x_id, data)
 	register Display *dpy;
 	register XAssocTable *table;
 	register XID x_id;
