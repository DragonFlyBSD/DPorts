--- src/xattr_p.h.orig	2019-08-03 19:54:00 UTC
+++ src/xattr_p.h
@@ -52,7 +52,7 @@
 #define ssize_t SSIZE_T
 #endif
 
-#if defined(Q_OS_LINUX) || defined(Q_OS_MAC) || defined(Q_OS_FREEBSD) || defined(Q_OS_NETBSD)
+#if (defined(Q_OS_LINUX) || defined(Q_OS_MAC) || defined(Q_OS_FREEBSD) || defined(Q_OS_NETBSD)) && !defined(__DragonFly__)
 inline ssize_t k_getxattr(const QString& path, const QString& name, QString* value)
 {
     const QByteArray p = QFile::encodeName(path);
