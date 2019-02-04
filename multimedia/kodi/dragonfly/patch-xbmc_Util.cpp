--- xbmc/Util.cpp.orig	2018-08-04 14:01:52.668914000 +0200
+++ xbmc/Util.cpp	2018-08-04 14:02:19.719497000 +0200
@@ -26,7 +26,7 @@
 #include <mach-o/dyld.h>
 #endif
 
-#if defined(TARGET_FREEBSD)
+#if defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
 #include <sys/param.h>
 #include <sys/sysctl.h>
 #endif
@@ -1774,7 +1774,7 @@ std::string CUtil::ResolveExecutablePath
 
   CDarwinUtils::GetExecutablePath(given_path, &path_size);
   strExecutablePath = given_path;
-#elif defined(TARGET_FREEBSD)                                                                                                                                                                   
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   char buf[PATH_MAX];
   size_t buflen;
   int mib[4];
