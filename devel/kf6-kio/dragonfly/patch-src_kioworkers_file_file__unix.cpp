--- src/kioworkers/file/file_unix.cpp.orig	2023-12-20 10:56:32 UTC
+++ src/kioworkers/file/file_unix.cpp
@@ -539,8 +539,11 @@ bool FileProtocol::copyXattrs(const int
         listlen = flistxattr(src_fd, keylist.data(), listlen);
 #elif defined(Q_OS_MAC)
         listlen = flistxattr(src_fd, keylist.data(), listlen, 0);
-#elif HAVE_SYS_EXTATTR_H
+#elif (HAVE_SYS_EXTATTR_H) && !defined(__DragonFly__)
         listlen = extattr_list_fd(src_fd, EXTATTR_NAMESPACE_USER, listlen == 0 ? nullptr : keylist.data(), listlen);
+#else
+	listlen = -1;
+	errno = ENOTSUP;
 #endif
         if (listlen > 0 && keylist.size() == 0) {
             continue;
@@ -597,7 +600,7 @@ bool FileProtocol::copyXattrs(const int
             valuelen = fgetxattr(src_fd, key.constData(), value.data(), valuelen);
 #elif defined(Q_OS_MAC)
             valuelen = fgetxattr(src_fd, key.constData(), value.data(), valuelen, 0, 0);
-#elif HAVE_SYS_EXTATTR_H
+#elif (HAVE_SYS_EXTATTR_H) && !defined(__DragonFly__)
             valuelen = extattr_get_fd(src_fd, EXTATTR_NAMESPACE_USER, key.constData(), valuelen == 0 ? nullptr : value.data(), valuelen);
 #endif
             if (valuelen > 0 && value.size() == 0) {
@@ -631,8 +634,11 @@ bool FileProtocol::copyXattrs(const int
         ssize_t destlen = fsetxattr(dest_fd, key.constData(), value.constData(), valuelen, 0);
 #elif defined(Q_OS_MAC)
         ssize_t destlen = fsetxattr(dest_fd, key.constData(), value.constData(), valuelen, 0, 0);
-#elif HAVE_SYS_EXTATTR_H
+#elif (HAVE_SYS_EXTATTR_H) && !defined(__DragonFly__)
         ssize_t destlen = extattr_set_fd(dest_fd, EXTATTR_NAMESPACE_USER, key.constData(), value.constData(), valuelen);
+#else
+	ssize_t destlen = -1;
+	errno = ENOTSUP;
 #endif
         if (destlen == -1 && errno == ENOTSUP) {
             qCDebug(KIO_FILE) << "Destination filesystem does not support xattrs";
