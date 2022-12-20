--- src/Base/FileInfo.cpp.orig	2022-12-15 11:08:29.396825000 +0100
+++ src/Base/FileInfo.cpp	2022-12-15 11:08:42.776721000 +0100
@@ -33,6 +33,7 @@
 # if defined (FC_OS_LINUX) || defined(FC_OS_CYGWIN) || defined(FC_OS_MACOSX) || defined(FC_OS_BSD)
 # include <dirent.h>
 # include <unistd.h>
+# include <sys/syslimits.h>
 # elif defined (FC_OS_WIN32)
 # include <io.h>
 # include <Windows.h>
