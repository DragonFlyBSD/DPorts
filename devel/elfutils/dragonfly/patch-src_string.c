--- src/strings.c.orig	2018-09-14 10:23:36 UTC
+++ src/strings.c
@@ -478,6 +478,9 @@ map_file (int fd, off_t start_off, off_t
 		  fd, start_off);
       if (mem != MAP_FAILED)
 	{
+#ifdef __DragonFly__
+	  madvise(mem, map_size, MADV_WILLNEED);
+#endif
 	  /* We will go through the mapping sequentially.  */
 	  (void) posix_madvise (mem, map_size, POSIX_MADV_SEQUENTIAL);
 	  break;
