
$FreeBSD: head/emulators/yape/files/patch-serial.h 340725 2014-01-22 17:40:44Z mat $

--- serial.h.orig
+++ serial.h
@@ -1,7 +1,7 @@
 #ifndef _SERIAL_H
 #define _SERIAL_H
 
-#include "SDL/SDL.h"
+#include "SDL.h"
 
 class CSerial {
 
