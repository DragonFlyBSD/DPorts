--- src/jrd/os/posix/unix.cpp.intermediate	2026-10-15 15:06:01 UTC
+++ src/jrd/os/posix/unix.cpp
@@ -57,7 +57,11 @@
 #endif
 
 #ifdef FREEBSD
+#ifdef __DragonFly__
+#include <sys/diskslice.h>
+#else
 #include <sys/disk.h>
+#endif
 #define BLKGETSIZE64 DIOCGMEDIASIZE
 #define BLKGETSIZE DIOCGMEDIASIZE
 #define BLKSSZGET DIOCGSECTORSIZE
