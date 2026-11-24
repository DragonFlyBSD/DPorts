--- unreliablefs_errno_freebsd.h.orig
+++ unreliablefs_errno_freebsd.h
@@ -40,7 +40,9 @@
 static const int errno_creat[] = {
     EACCES,
     EBADF,
+#ifdef ECAPMODE
     ECAPMODE,
+#endif
     EDQUOT,
     EEXIST,
     EFAULT,
@@ -58,7 +60,9 @@
     ENFILE,
     ENOENT,
     ENOSPC,
+#ifdef ENOTCAPABLE
     ENOTCAPABLE,
+#endif
     ENOTDIR,
     ENXIO,
     EOPNOTSUPP,
@@ -202,7 +206,9 @@
 
 static const int errno_rename[] = {
     EACCES,
+#ifdef ECAPMODE
     ECAPMODE,
+#endif
     EDQUOT,
     EFAULT,
 #if __FreeBSD__ >= 12
