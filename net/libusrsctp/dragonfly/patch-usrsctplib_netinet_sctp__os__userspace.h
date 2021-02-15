--- usrsctplib/netinet/sctp_os_userspace.h.orig	2021-01-10 09:44:05 UTC
+++ usrsctplib/netinet/sctp_os_userspace.h
@@ -409,6 +409,7 @@ struct sx {int dummy;};
 #include <stdio.h>
 #include <string.h>
 #include <stdbool.h>
+#include <sys/param.h>
 /* #include <sys/param.h>  in FreeBSD defines MSIZE */
 /* #include <sys/ktr.h> */
 /* #include <sys/systm.h> */
