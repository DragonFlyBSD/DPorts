--- spectro/icoms_ux.c.orig	2014-01-31 04:08:57 UTC
+++ spectro/icoms_ux.c
@@ -541,9 +541,6 @@ word_length	 word
 			case baud_115200:
 				speed = B115200;
 				break;
-			case baud_921600:
-				speed = B921600;
-				break;
 			default:
 				close(p->fd);
 				a1loge(p->log, ICOM_SYS, "icoms_set_ser_port: illegal baud rate! (0x%x)\n",p->br);
