--- sockets.stub.php.orig	2026-07-28 13:06:52 UTC
+++ sockets.stub.php
@@ -312,29 +312,37 @@ const SO_BINDTOIFINDEX = UNKNOWN;
 #ifdef SO_USER_COOKIE
 /**
  * @var int
+ * @cvalue SO_USER_COOKIE
+ */
+const SO_USER_COOKIE = UNKNOWN;
+#endif
+#ifdef SO_LABEL
+/**
+ * @var int
  * @cvalue SO_LABEL
  */
 const SO_LABEL = UNKNOWN;
+#endif
+#ifdef SO_PEERLABEL
 /**
  * @var int
  * @cvalue SO_PEERLABEL
  */
 const SO_PEERLABEL = UNKNOWN;
+#endif
+#ifdef SO_LISTENQLIMIT
 /**
  * @var int
  * @cvalue SO_LISTENQLIMIT
  */
 const SO_LISTENQLIMIT = UNKNOWN;
+#endif
+#ifdef SO_LISTENQLEN
 /**
  * @var int
  * @cvalue SO_LISTENQLEN
  */
 const SO_LISTENQLEN = UNKNOWN;
-/**
- * @var int
- * @cvalue SO_USER_COOKIE
- */
-const SO_USER_COOKIE = UNKNOWN;
 #endif
 #ifdef SO_SETFIB
 /**
