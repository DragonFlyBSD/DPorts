--- src/ioslaves/file/ConfigureChecks.cmake.orig	2020-12-05 12:48:29 UTC
+++ src/ioslaves/file/ConfigureChecks.cmake
@@ -10,7 +10,6 @@ check_include_files(sys/time.h    HAVE_S
 check_include_files(string.h      HAVE_STRING_H)
 check_include_files(limits.h      HAVE_LIMITS_H)
 check_include_files(sys/xattr.h   HAVE_SYS_XATTR_H)
-check_include_files("sys/types.h;sys/extattr.h" HAVE_SYS_EXTATTR_H)
 
 check_function_exists(sendfile    HAVE_SENDFILE)
 
