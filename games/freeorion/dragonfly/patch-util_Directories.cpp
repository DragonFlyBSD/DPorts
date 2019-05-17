--- util/Directories.cpp.orig	2018-08-23 09:41:14 UTC
+++ util/Directories.cpp
@@ -11,7 +11,7 @@
 
 #include <cstdlib>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/sysctl.h>
 #endif
 
@@ -135,7 +135,7 @@ const fs::path GetPythonHome() {
     return s_python_home;
 }
 
-#elif defined(FREEORION_LINUX) || defined(FREEORION_FREEBSD) || defined(FREEORION_OPENBSD)
+#elif defined(FREEORION_LINUX) || defined(FREEORION_FREEBSD) || defined(FREEORION_OPENBSD) || defined(FREEORION_DRAGONFLY)
 #include "binreloc.h"
 #include <unistd.h>
 #include <boost/filesystem/fstream.hpp>
@@ -313,7 +313,7 @@ void InitBinDir(const std::string& argv0
         // get this executable's path by following link
         char buf[2048] = {'\0'};
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         int mib[4];
         mib[0] = CTL_KERN;
         mib[1] = KERN_PROC;
@@ -422,7 +422,7 @@ void InitBinDir(const std::string& argv0
 }
 
 #else
-#  error Neither FREEORION_LINUX, FREEORION_FREEBSD, FREEORION_OPENBSD nor FREEORION_WIN32 set
+#  error Neither FREEORION_LINUX, FREEORION_FREEBSD, FREEORION_OPENBSD, FREEORION_DRAGONFLY nor FREEORION_WIN32 set
 #endif
 
 void CompleteXDGMigration() {
