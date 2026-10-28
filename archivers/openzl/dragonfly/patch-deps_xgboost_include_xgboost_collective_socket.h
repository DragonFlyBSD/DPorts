--- deps/xgboost/include/xgboost/collective/socket.h.orig
+++ deps/xgboost/include/xgboost/collective/socket.h
@@ -310,7 +310,14 @@
 #elif defined(__APPLE__)
     return domain_;
 #elif defined(__unix__)
-#ifndef __PASE__
+#if defined(__DragonFly__)
+    // No SO_DOMAIN on DragonFly: take the family of the socket's address.
+    struct sockaddr_storage ss;
+    socklen_t sslen = sizeof(ss);
+    xgboost_CHECK_SYS_CALL(getsockname(handle_, reinterpret_cast<struct sockaddr *>(&ss), &sslen),
+                           0);
+    return ret_iafamily(ss.ss_family);
+#elif !defined(__PASE__)
     std::int32_t domain;
     socklen_t len = sizeof(domain);
     xgboost_CHECK_SYS_CALL(
