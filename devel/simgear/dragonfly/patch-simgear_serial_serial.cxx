--- simgear/serial/serial.cxx.orig	2026-08-02 12:17:27 UTC
+++ simgear/serial/serial.cxx
@@ -235,7 +235,7 @@ bool SGSerialPort::set_baud(int baud) {
 	speed = B19200;
     } else if ( baud == 38400 ) {
 	speed = B38400;
-#if defined( linux ) || defined( __FreeBSD__ )
+#if defined( linux ) || defined( __FreeBSD__ ) || defined( __DragonFly__ )
     } else if ( baud == 57600 ) {
 	speed = B57600;
     } else if ( baud == 115200 ) {
