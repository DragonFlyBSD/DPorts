--- restinio/impl/sendfile_operation_posix.ipp.orig	2026-09-03 05:39:12 UTC
+++ restinio/impl/sendfile_operation_posix.ipp
@@ -212,7 +212,9 @@
 					nullptr, // struct	sf_hdtr	*hdtr
 					&n, // sbytes
 					// Is 16 a reasonable constant here.
-#if __FreeBSD__ >= 11
+#if defined( __DragonFly__ )
+					0 // DragonFly's sendfile(2) takes no SF_* flags
+#elif __FreeBSD__ >= 11
 					SF_FLAGS( 16, SF_NOCACHE )
 #else
 					SF_MNOWAIT
