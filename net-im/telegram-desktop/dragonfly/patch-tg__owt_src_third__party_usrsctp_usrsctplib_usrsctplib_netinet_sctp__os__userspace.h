--- tg_owt/src/third_party/usrsctp/usrsctplib/usrsctplib/netinet/sctp_os_userspace.h.orig	2020-08-30 09:41:57 UTC
+++ tg_owt/src/third_party/usrsctp/usrsctplib/usrsctplib/netinet/sctp_os_userspace.h
@@ -436,6 +436,7 @@ struct sx {int dummy;};
 
 #include <stdio.h>
 #include <string.h>
+#include <sys/param.h>	/* For _ALIGN */
 /* #include <sys/param.h>  in FreeBSD defines MSIZE */
 /* #include <sys/ktr.h> */
 /* #include <sys/systm.h> */
