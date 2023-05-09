--- src/3rdparty/chromium/mojo/public/cpp/platform/named_platform_channel_posix.cc.orig	2021-12-15 16:12:54 UTC
+++ src/3rdparty/chromium/mojo/public/cpp/platform/named_platform_channel_posix.cc
@@ -8,6 +8,7 @@
 #include <sys/socket.h>
 #include <sys/un.h>
 #include <unistd.h>
+#include <string.h>
 
 #include "base/files/file_util.h"
 #include "base/files/scoped_file.h"
