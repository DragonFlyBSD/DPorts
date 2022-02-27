--- conversions.c.orig	2021-12-15 02:00:45 UTC
+++ conversions.c
@@ -24,6 +24,10 @@
 #include <stdarg.h>
 #include <stddef.h>
 
+#ifdef __DragonFly__
+#include <sys/ucred.h>
+#endif
+
 #ifdef PHP_WIN32
 typedef unsigned short sa_family_t;
 # define msghdr			_WSAMSG
@@ -1299,12 +1303,21 @@ void to_zval_read_in6_pktinfo(const char
 
 /* CONVERSIONS for struct ucred */
 #ifdef SO_PASSCRED
+#if defined(__DragonFly__)
+static const field_descriptor descriptors_ucred[] = {
+		{"pid", sizeof("pid"), 1, offsetof(struct cmsgcred, cmcred_pid), from_zval_write_pid_t, to_zval_read_pid_t},
+		{"uid", sizeof("uid"), 1, offsetof(struct cmsgcred, cmcred_uid), from_zval_write_uid_t, to_zval_read_uid_t},
+		/* assume the type gid_t is the same as uid_t: */
+		{"gid", sizeof("gid"), 1, offsetof(struct cmsgcred, cmcred_gid), from_zval_write_uid_t, to_zval_read_uid_t},
+		{0}
+#else
 static const field_descriptor descriptors_ucred[] = {
 		{"pid", sizeof("pid"), 1, offsetof(struct ucred, pid), from_zval_write_pid_t, to_zval_read_pid_t},
 		{"uid", sizeof("uid"), 1, offsetof(struct ucred, uid), from_zval_write_uid_t, to_zval_read_uid_t},
 		/* assume the type gid_t is the same as uid_t: */
 		{"gid", sizeof("gid"), 1, offsetof(struct ucred, gid), from_zval_write_uid_t, to_zval_read_uid_t},
 		{0}
+#endif
 };
 void from_zval_write_ucred(const zval *container, char *ucred_c, ser_context *ctx)
 {
