--- src/utils/file_utils.cpp.orig	2020-05-19 20:42:49 UTC
+++ src/utils/file_utils.cpp
@@ -49,6 +49,7 @@
 #  include <fcntl.h>
 #  include <errno.h>
 #  include <poll.h>
+#  include <limits.h> // for PATH_MAX
 #endif // _WIN_
 
 #include <algorithm>
