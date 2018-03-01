--- src/ioslaves/file/sharefd_p.h.orig	2018-02-08 20:37:30 UTC
+++ src/ioslaves/file/sharefd_p.h
@@ -20,6 +20,7 @@
 
 #include <sys/un.h>
 #include <iostream>
+#include <cstring>
 #include <unistd.h>
 #include <sys/socket.h>
 
@@ -51,7 +52,7 @@ public:
 private:
     static sockaddr_un make_address(const std::string& path)
     {
-        sockaddr_un a{ AF_UNIX, {0}};
+        sockaddr_un a{ AF_UNIX, 0 };
         std::string finalPath = "/tmp/" + path;
 #ifdef __linux__
         ::strcpy(&a.sun_path[1], finalPath.c_str());
