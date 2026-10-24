--- cmn/role.cpp.orig
+++ cmn/role.cpp
@@ -658,7 +658,7 @@
     client.sin_family = AF_INET;
     client.sin_addr.s_addr = htonl(INADDR_ANY);
     client.sin_port = htons((u_short)(clientPortBase + n));
-    if (bind(udpSock,(CMN_SOCKADDR *)&client,sizeof(client)) >= 0) {
+    if (::bind(udpSock,(CMN_SOCKADDR *)&client,sizeof(client)) >= 0) {
       // Success.
       break;
     }
@@ -1844,7 +1844,7 @@
   serverAddr.sin_port = htons(port);
 
   // Give address to both the TCP and UDP sockets.
-  if (bind(tcpSock, (CMN_SOCKADDR *)&serverAddr, sizeof(serverAddr)) < 0) {
+  if (::bind(tcpSock, (CMN_SOCKADDR *)&serverAddr, sizeof(serverAddr)) < 0) {
     ostrstream str;
     str << "Couldn't bind socket name to TCP socket on port " 
         << port << "."  << ends;
@@ -1852,7 +1852,7 @@
     delete str.str();
     return;
   }
-  if (bind(udpSock, (CMN_SOCKADDR *)&serverAddr, sizeof(serverAddr)) < 0) {
+  if (::bind(udpSock, (CMN_SOCKADDR *)&serverAddr, sizeof(serverAddr)) < 0) {
     ostrstream str;
     str << "Couldn't bind socket name to UDP socket on port " 
         << port << "."  << ends;
