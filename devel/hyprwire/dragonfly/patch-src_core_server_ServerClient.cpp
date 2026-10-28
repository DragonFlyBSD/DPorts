--- src/core/server/ServerClient.cpp.orig	2026-10-26 01:37:07 UTC
+++ src/core/server/ServerClient.cpp
@@ -42,6 +42,11 @@ void CServerClient::dispatchFirstPoll() {
 
     // get peer's pid
 
+#if defined(__DragonFly__)
+    // DragonFly's LOCAL_PEERCRED xucred carries no pid; leave m_pid at -1.
+    TRACE(Debug::log(TRACE, "dispatchFirstPoll: no peer pid on DragonFly"));
+#else
+
 #if defined(__FreeBSD__)
     struct xucred cred;
 #elif defined(__OpenBSD__)
@@ -65,6 +70,7 @@ void CServerClient::dispatchFirstPoll() {
 #else
     m_pid = cred.pid;
 #endif
+#endif
 }
 
 void CServerClient::sendMessage(const IMessage& message) {
