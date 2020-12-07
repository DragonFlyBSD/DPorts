--- mailestd.c.orig	2018-07-12 00:25:58 UTC
+++ mailestd.c
@@ -73,6 +73,29 @@
 #include "mailestd.h"
 #include "mailestd_local.h"
 
+#ifndef RB_NFIND
+static struct rfc822 *
+rfc822_tree_RB_NFIND(struct rfc822_tree *head, struct rfc822 *elm)
+{
+	struct rfc822 *tmp = RB_ROOT(head);
+	struct rfc822 *res = NULL;
+	int comp;
+	while (tmp) {
+		comp = rfc822_compar(elm, tmp);
+		if (comp < 0) {
+			res = tmp;
+			tmp = RB_LEFT(tmp, tree);
+		}
+		else if (comp > 0)
+			tmp = RB_RIGHT(tmp, tree);
+		else
+			return (tmp);
+	}
+	return (res);
+}
+#define RB_NFIND(name, x, y) name##_RB_NFIND(x, y)
+#endif
+
 int	mailestctl_main(int argc, char *argv[]);
 
 static void
