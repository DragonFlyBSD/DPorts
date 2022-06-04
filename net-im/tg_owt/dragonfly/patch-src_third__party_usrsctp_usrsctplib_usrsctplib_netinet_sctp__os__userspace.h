--- src/third_party/usrsctp/usrsctplib/usrsctplib/netinet/sctp_os_userspace.h.orig	2022-02-25 20:06:20 UTC
+++ src/third_party/usrsctp/usrsctplib/usrsctplib/netinet/sctp_os_userspace.h
@@ -409,6 +409,7 @@ struct sx {int dummy;};
 #include <stdio.h>
 #include <string.h>
 #include <stdbool.h>
+#include <sys/param.h>	/* For _ALIGN */
 /* #include <sys/param.h>  in FreeBSD defines MSIZE */
 /* #include <sys/ktr.h> */
 /* #include <sys/systm.h> */
