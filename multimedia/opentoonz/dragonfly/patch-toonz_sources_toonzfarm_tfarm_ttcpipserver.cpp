--- toonz/sources/toonzfarm/tfarm/ttcpipserver.cpp.orig	2021-04-10 13:00:20 UTC
+++ toonz/sources/toonzfarm/tfarm/ttcpipserver.cpp
@@ -367,13 +367,13 @@ void TTcpIpServer::run() {
     if (!err && m_imp->m_s != -1) {
 //      signal(SIGCHLD, fireman);           /* this eliminates zombies */
 
-#ifdef MACOSX
+#if defined(MACOSX) || defined(__DragonFly__)
       struct sigaction sact;
       sact.sa_handler = shutdown_cb;
       sigaction(SIGUSR1, &sact, 0);
 #else
       sigset(SIGUSR1, shutdown_cb);
-#endif
+#endif 
 
       int t;
 
