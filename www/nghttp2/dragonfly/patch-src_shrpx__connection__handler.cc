--- src/shrpx_connection_handler.cc.orig	2015-04-19 09:26:53 UTC
+++ src/shrpx_connection_handler.cc
@@ -27,6 +27,7 @@
 #include <unistd.h>
 #include <sys/types.h>
 #include <sys/wait.h>
+#include <sys/param.h>
 
 #include <cerrno>
 #include <thread>
@@ -372,7 +373,7 @@ int ConnectionHandler::start_ocsp_update
       const_cast<char *>(cert_file), nullptr};
   char *const envp[] = {nullptr};
 
-#ifdef O_CLOEXEC
+#if __DragonFly_version >= 400106
   if (pipe2(pfd, O_CLOEXEC) == -1) {
     return -1;
   }
