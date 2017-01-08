--- src/debuginfo.cpp.orig	2016-09-20 05:54:21.000000000 +0300
+++ src/debuginfo.cpp
@@ -1058,7 +1058,7 @@ bool jl_dylib_DI_for_fptr(size_t pointer
     int isdarwin = 0, islinux = 0, iswindows = 0;
 #if defined(_OS_DARWIN_)
     isdarwin = 1;
-#elif defined(_OS_LINUX_) || defined(_OS_FREEBSD_)
+#elif defined(_OS_LINUX_) || defined(_OS_FREEBSD_) || defined(_OS_DRAGONFLY_)
     islinux = 1;
 #elif defined(_OS_WINDOWS_)
     iswindows = 1;
