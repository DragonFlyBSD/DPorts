--- nall/nall/inode.hpp.orig
+++ nall/nall/inode.hpp
@@ -90,7 +90,7 @@
     #if defined(PLATFORM_WINDOWS)
     //on Windows, the last status change time (ctime) holds the file creation time instead
     case time::create: return data.st_ctime;
-    #elif defined(PLATFORM_BSD) || defined(PLATFORM_MACOS)
+    #elif (defined(PLATFORM_BSD) && !defined(__DragonFly__)) || defined(PLATFORM_MACOS)
     //st_birthtime may return -1 or st_atime if it is not supported by the file system
     //the best that can be done in this case is to return st_mtime if it's older
     case time::create: return min((u32)data.st_birthtime, (u32)data.st_mtime);
