--- src/cpp/core/system/PosixFileScanner.cpp.orig	2019-09-19 13:59:21 UTC
+++ src/cpp/core/system/PosixFileScanner.cpp
@@ -83,7 +83,7 @@ Error scanDir(const std::string& dirPath
    {
       // get the name (then free it)
       std::string name(namelist[i]->d_name,
-#ifdef __APPLE__
+#if defined(__APPLE__) || defined(__DragonFly__)
                        namelist[i]->d_namlen);
 #else
                        namelist[i]->d_reclen);
