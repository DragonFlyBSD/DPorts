--- opensmtpd.c.orig	2020-09-08 15:12:45 UTC
+++ opensmtpd.c
@@ -2005,6 +2005,7 @@ osmtpd_addrtoss(char *addr, struct socka
 				osmtpd_errx(1, "Invalid line received: invalid "
 				    "address (%s): %s", addr, linedup);
 			port[-2] = '\0';
+			n = -1; // silence warning. `n` is not used in any `hasport` branch.
 		} else {
 			n = strlen(addr);
 			if (addr[n - 1] != ']')
