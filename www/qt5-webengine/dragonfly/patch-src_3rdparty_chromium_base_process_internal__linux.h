--- src/3rdparty/chromium/base/process/internal_linux.h.intermediate	2023-05-09 11:10:37 UTC
+++ src/3rdparty/chromium/base/process/internal_linux.h
@@ -11,6 +11,7 @@
 #include <stddef.h>
 #include <stdint.h>
 #include <unistd.h>
+#include <string.h>
 
 #include "base/files/dir_reader_posix.h"
 #include "base/files/file_path.h"
