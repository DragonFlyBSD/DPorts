--- components/pango_core/src/file_utils.cpp.orig	2022-09-15 02:58:00 UTC
+++ components/pango_core/src/file_utils.cpp
@@ -49,6 +49,7 @@
 #  include <fcntl.h>
 #  include <errno.h>
 #  include <poll.h>
+#  include <limits.h> // for PATH_MAX
 #endif // _WIN_
 
 #include <algorithm>
