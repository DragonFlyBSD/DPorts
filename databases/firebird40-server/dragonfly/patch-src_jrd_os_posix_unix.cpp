--- src/jrd/os/posix/unix.cpp.intermediate	2026-10-15 16:11:01 UTC
+++ src/jrd/os/posix/unix.cpp
@@ -56,7 +56,7 @@
 #include <linux/fs.h>
 #endif
 
-#ifdef FREEBSD
+#if defined(FREEBSD) && !defined(__DragonFly__)
 #include <sys/disk.h>
 #define BLKGETSIZE64 DIOCGMEDIASIZE
 #define BLKGETSIZE DIOCGMEDIASIZE
@@ -502,7 +502,7 @@ ULONG PIO_get_number_of_pages(const jrd_file* file, co
 // Looks like any OS needs own ioctl() to determine raw device size
 #undef HAS_RAW_SIZE
 
-#if defined(LINUX) || defined(FREEBSD)
+#if (defined(LINUX) || defined(FREEBSD)) && !defined(__DragonFly__)
 #ifdef BLKGETSIZE64
 		if (ioctl(file->fil_desc, BLKGETSIZE64, &length) != 0)
 #endif /*BLKGETSIZE64*/
@@ -519,10 +519,15 @@ ULONG PIO_get_number_of_pages(const jrd_file* file, co
 			length *= sectorSize;
 		}
 #define HAS_RAW_SIZE
-#endif /*LINUX*/
+#endif /*LINUX || FREEBSD, not DragonFly*/
 
 #ifndef HAS_RAW_SIZE
+#if defined(__DragonFly__)
+// Raw device size ioctls are unavailable: use the stat size already in length.
+#define HAS_RAW_SIZE
+#else
 error: Raw device support for your OS is missing. Fix it or turn off raw device support.
+#endif
 #endif
 #undef HAS_RAW_SIZE
 	}
