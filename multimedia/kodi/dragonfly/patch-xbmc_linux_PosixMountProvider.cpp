--- xbmc/linux/PosixMountProvider.cpp.orig	2018-08-04 14:55:34.718424000 +0200
+++ xbmc/linux/PosixMountProvider.cpp	2018-08-04 14:57:59.721565000 +0200
@@ -41,7 +41,7 @@ void CPosixMountProvider::GetDrives(VECS
   std::vector<std::string> result;
 
   CRegExp reMount;
-#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD)
+#if defined(TARGET_DARWIN) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   reMount.RegComp("on (.+) \\(([^,]+)");
 #else
   reMount.RegComp("on (.+) type ([^ ]+)");
@@ -101,6 +101,8 @@ std::vector<std::string> CPosixMountProv
   FILE* pipe = popen("df -hT ufs,cd9660,hfs,udf", "r");
 #elif defined(TARGET_FREEBSD)
   FILE* pipe = popen("df -h -t ufs,cd9660,hfs,udf,zfs", "r");
+#elif defined(TARGET_DRAGONFLY)
+  FILE* pipe = popen("df -h -t ufs,cd9660,hammer,hammer2,udf", "r");
 #else
   FILE* pipe = popen("df -h", "r");
 #endif
