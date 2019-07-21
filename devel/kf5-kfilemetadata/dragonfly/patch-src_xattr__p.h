--- src/xattr_p.h.orig	2019-07-07 18:33:26 UTC
+++ src/xattr_p.h
@@ -53,7 +53,7 @@
 #define ssize_t SSIZE_T
 #endif
 
-#if defined(Q_OS_LINUX) || defined(Q_OS_MAC) || defined(Q_OS_FREEBSD) || defined(Q_OS_NETBSD)
+#if (defined(Q_OS_LINUX) || defined(Q_OS_MAC) || defined(Q_OS_FREEBSD) || defined(Q_OS_NETBSD)) && !defined(__DragonFly__)
 inline ssize_t k_getxattr(const QString& path, const QString& name, QString* value)
 {
     const QByteArray p = QFile::encodeName(path);
@@ -439,7 +439,7 @@ inline int k_removexattr(const QString&,
 
 inline bool k_hasAttribute(const QString&, const QString&)
 {
-    return false
+    return false;
 }
 
 inline bool k_isSupported(const QString&)
