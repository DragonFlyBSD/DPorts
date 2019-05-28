--- src/runtime/oclgrind.cpp.intermediate	2019-05-27 20:44:46.000000000 +0000
+++ src/runtime/oclgrind.cpp
@@ -425,7 +425,7 @@ static string getLibDirPath()
 #if defined(__APPLE__)
   uint32_t sz = PATH_MAX;
   if (_NSGetExecutablePath(exepath, &sz))
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   char temp[PATH_MAX];
   snprintf(temp, sizeof(temp), "/proc/%d/file", getpid());
   if (readlink(temp, exepath, PATH_MAX) == -1)
