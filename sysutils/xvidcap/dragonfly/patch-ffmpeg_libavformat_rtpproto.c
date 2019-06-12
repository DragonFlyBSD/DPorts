--- ffmpeg/libavformat/rtpproto.c.orig	2008-05-02 15:22:46 UTC
+++ ffmpeg/libavformat/rtpproto.c
@@ -29,6 +29,7 @@
 
 #include <unistd.h>
 #include <stdarg.h>
+#include <sys/select.h>
 #include "network.h"
 #include "os_support.h"
 #include <fcntl.h>
