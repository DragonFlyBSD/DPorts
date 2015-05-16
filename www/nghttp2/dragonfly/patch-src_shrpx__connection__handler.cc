--- src/shrpx_connection_handler.cc.orig	2015-04-19 09:26:53 UTC
+++ src/shrpx_connection_handler.cc
@@ -372,7 +372,7 @@ int ConnectionHandler::start_ocsp_update
       const_cast<char *>(cert_file), nullptr};
   char *const envp[] = {nullptr};
 
-#ifdef O_CLOEXEC
+#if 0
   if (pipe2(pfd, O_CLOEXEC) == -1) {
     return -1;
   }
