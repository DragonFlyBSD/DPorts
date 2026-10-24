--- erts/emulator/drivers/common/inet_drv.c.orig	2026-10-23 00:00:00 UTC
+++ erts/emulator/drivers/common/inet_drv.c
@@ -14603,7 +14603,9 @@
         switch(buf[2]) {
         case INET_PROTO_DEFAULT: protocol = 0; break;
         case INET_PROTO_UDP: protocol = IPPROTO_UDP; break;
+#ifdef HAVE_SCTP
         case INET_PROTO_SCTP: protocol = IPPROTO_SCTP; break;
+#endif
         default:
             return ctl_xerror(str_eprotonosupport, rbuf, rsize);
         }
