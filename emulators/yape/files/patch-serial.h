
$FreeBSD: emulators/yape/files/patch-serial.h 300896 2012-07-14 13:54:48Z beat $

--- serial.h.orig
+++ serial.h
@@ -1,7 +1,7 @@
 #ifndef _SERIAL_H
 #define _SERIAL_H
 
-#include "SDL/SDL.h"
+#include "SDL.h"
 
 class CSerial {
 
