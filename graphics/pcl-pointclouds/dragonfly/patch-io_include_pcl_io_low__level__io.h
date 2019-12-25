--- io/include/pcl/io/low_level_io.h.orig	2018-11-26 11:50:33 UTC
+++ io/include/pcl/io/low_level_io.h
@@ -173,8 +173,13 @@ namespace pcl
         return 0;
 #  else
       // Conforming POSIX systems have posix_fallocate.
+#   ifdef __DragonFly__
+      /* DragonFly does not have posix_fallocate(), COW fs */
+      errno = EINVAL;	/* do not use on local FSs */
+#   else
       if (::posix_fallocate(fd, 0, length) == 0)
         return 0;
+#   endif
 #  endif
 
       // EINVAL should indicate an unsupported filesystem.
