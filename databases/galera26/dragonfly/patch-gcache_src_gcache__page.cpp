--- gcache/src/gcache_page.cpp.orig	2014-03-27 17:49:30.000000000 +0200
+++ gcache/src/gcache_page.cpp
@@ -40,7 +40,7 @@ gcache::Page::drop_fs_cache() const
 {
     mmap_.dont_need();
 
-#if !defined(__APPLE__)
+#if !defined(__APPLE__) && !defined(__DragonFly__)
     int const err (posix_fadvise (fd_.get(), 0, fd_.size(),
                                   POSIX_FADV_DONTNEED));
     if (err != 0)
