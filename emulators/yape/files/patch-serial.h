
$FreeBSD: ports/emulators/yape/files/patch-serial.h,v 1.2 2012/11/17 05:57:25 svnexp Exp $

--- serial.h.orig
+++ serial.h
@@ -1,7 +1,7 @@
 #ifndef _SERIAL_H
 #define _SERIAL_H
 
-#include "SDL/SDL.h"
+#include "SDL.h"
 
 class CSerial {
 
