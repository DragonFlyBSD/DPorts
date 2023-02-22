--- ext/sctp/usrsctp/usrsctplib/netinet/sctp_os_userspace.h.orig	2022-12-19 23:34:46 UTC
+++ ext/sctp/usrsctp/usrsctplib/netinet/sctp_os_userspace.h
@@ -409,6 +409,10 @@ struct sx {int dummy;};
 #include <stdio.h>
 #include <string.h>
 #include <stdbool.h>
+#ifdef __DragonFly__
+/* For the _ALIGN() macro */
+#include <sys/param.h>
+#endif
 /* #include <sys/param.h>  in FreeBSD defines MSIZE */
 /* #include <sys/ktr.h> */
 /* #include <sys/systm.h> */
