--- x11/serverping.cpp.orig
+++ x11/serverping.cpp
@@ -172,7 +172,7 @@
   client.sin_family = AF_INET;
   client.sin_addr.s_addr = htonl(INADDR_ANY);
   client.sin_port = htons((u_short)clientPort);
-  if (bind(udpSock,(CMN_SOCKADDR *)&client,sizeof(client)) < 0) {
+  if (::bind(udpSock,(CMN_SOCKADDR *)&client,sizeof(client)) < 0) {
     ostrstream str;
     str << "Could not bind local UDP port " << clientPort << ends;
     error(str.str());
