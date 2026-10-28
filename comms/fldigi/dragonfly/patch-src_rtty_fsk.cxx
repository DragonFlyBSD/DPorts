--- src/rtty/fsk.cxx.orig
+++ src/rtty/fsk.cxx
@@ -53,7 +53,7 @@
 #include <math.h>
 #include <stdio.h>
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #ifdef __WIN32__
 #  include <windows.h>
 //#  include <chrono>
