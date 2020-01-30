--- kiofusevfs.cpp.orig	2019-12-21 15:13:04 UTC
+++ kiofusevfs.cpp
@@ -1963,6 +1963,9 @@ int KIOFuseVFS::kioErrorToFuseError(cons
 		case KIO::ERR_CANNOT_RENAME_PARTIAL        : return EIO;
 		case KIO::ERR_NEED_PASSWD                  : return EACCES;
 		case KIO::ERR_CANNOT_SYMLINK               : return EIO;
+#ifndef ENODATA
+#define ENODATA ENOATTR
+#endif
 		case KIO::ERR_NO_CONTENT                   : return ENODATA;
 		case KIO::ERR_DISK_FULL                    : return ENOMEM;
 		case KIO::ERR_IDENTICAL_FILES              : return EEXIST;
