--- Source/WTF/wtf/posix/FileSystemPOSIX.cpp.orig	Mon Oct 21 09:00:02 2024
+++ Source/WTF/wtf/posix/FileSystemPOSIX.cpp	Mon Oct
@@ -195,7 +195,7 @@ std::optional<WallTime> fileCreationTime(const String&
         return std::nullopt;
 
     return WallTime::fromRawSeconds(fileInfo.stx_btime.tv_sec);
-#elif OS(DARWIN) || OS(OPENBSD) || OS(NETBSD) || OS(FREEBSD)
+#elif (OS(DARWIN) || OS(OPENBSD) || OS(NETBSD) || OS(FREEBSD)) && !defined(__DragonFly__)
     struct stat fileInfo;
 
     if (stat(fsRep.data(), &fileInfo) == -1)
