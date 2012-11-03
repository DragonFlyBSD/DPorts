--- pkg/query.c.orig	2012-11-03 14:21:16.000000000 +0100
+++ pkg/query.c	2012-11-03 14:23:33.000000000 +0100
@@ -617,7 +617,7 @@
 					}
 					sbuf_putc(sqlcond, '\'');
 				} else {
-					if (!isnumber(str[0])) {
+					if (!isdigit(str[0])) {
 						fprintf(stderr, "a number is expected, got: %c\n", str[0]);
 						return (EPKG_FATAL);
 					}
@@ -626,7 +626,7 @@
 				}
 			}
 		} else if (state == INT) {
-			if (!isnumber(str[0])) {
+			if (!isdigit(str[0])) {
 				state = POST_EXPR;
 				str--;
 			} else {
