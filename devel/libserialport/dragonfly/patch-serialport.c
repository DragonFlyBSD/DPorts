--- serialport.c.orig	2014-05-06 23:52:22.000000000 +0300
+++ serialport.c
@@ -153,7 +153,7 @@ const struct std_baudrate std_baudrates[
 	BAUD(300), BAUD(600), BAUD(1200), BAUD(1800), BAUD(2400), BAUD(4800),
 	BAUD(9600), BAUD(19200), BAUD(38400), BAUD(57600), BAUD(115200),
 	BAUD(230400),
-#if !defined(__APPLE__) && !defined(__OpenBSD__)
+#if !defined(__APPLE__) && !defined(__OpenBSD__) && !defined(__DragonFly__)
 	BAUD(460800),
 #endif
 #endif
