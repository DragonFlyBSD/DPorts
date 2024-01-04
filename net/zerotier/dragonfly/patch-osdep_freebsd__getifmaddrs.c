--- osdep/freebsd_getifmaddrs.c.orig	2023-12-16 14:38:09 UTC
+++ osdep/freebsd_getifmaddrs.c
@@ -86,7 +86,7 @@ getifmaddrs(struct ifmaddrs **pif)
 	do {
 		if (sysctl(mib, 6, NULL, &needed, NULL, 0) < 0)
 			return (-1);
-		if ((buf = malloc(needed)) == NULL)
+		if ((buf = (char *)malloc(needed)) == NULL)
 			return (-1);
 		if (sysctl(mib, 6, buf, &needed, NULL, 0) < 0) {
 			if (errno != ENOMEM || ++ntry >= MAX_SYSCTL_TRY) {
@@ -122,7 +122,7 @@ getifmaddrs(struct ifmaddrs **pif)
 		}
 	}
 
-	data = malloc(sizeof(struct ifmaddrs) * icnt + dcnt);
+	data = (char *)malloc(sizeof(struct ifmaddrs) * icnt + dcnt);
 	if (data == NULL) {
 		free(buf);
 		return (-1);
