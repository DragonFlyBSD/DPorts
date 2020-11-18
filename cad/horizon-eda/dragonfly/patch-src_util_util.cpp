--- src/util/util.cpp.orig	2020-08-05 20:33:52 UTC
+++ src/util/util.cpp
@@ -119,7 +119,7 @@ std::string get_exe_dir()
         return "";
     }
 }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/sysctl.h>
 std::string get_exe_dir()
 {
