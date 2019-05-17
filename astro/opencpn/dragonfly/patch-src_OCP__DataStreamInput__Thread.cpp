--- src/OCP_DataStreamInput_Thread.cpp.orig	2016-06-25 12:26:20 UTC
+++ src/OCP_DataStreamInput_Thread.cpp
@@ -27,7 +27,7 @@
 #include "dychart.h"
 
 #ifdef __POSIX__
-	#include <sys/termios.h>
+	#include <termios.h>
 #endif
 
 #define DS_RX_BUFFER_SIZE 4096
