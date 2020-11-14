--- sendrecvmsg.c.orig	2020-10-13 21:58:13 UTC
+++ sendrecvmsg.c
@@ -24,6 +24,9 @@
 #include <TSRM/TSRM.h>
 #endif
 
+#ifdef __DragonFly__
+#include <sys/ucred.h>
+#endif
 #define MAX_USER_BUFF_SIZE ((size_t)(100*1024*1024))
 #define DEFAULT_BUFF_SIZE 8192
 #define MAX_ARRAY_KEY_SIZE 128
@@ -121,9 +124,14 @@ static void init_ancillary_registry(void
 #endif
 
 #ifdef SO_PASSCRED
+#if defined(__DragonFly__)
+	PUT_ENTRY(sizeof(struct cmsgcred), 0, 0, from_zval_write_ucred,
+			to_zval_read_ucred, SOL_SOCKET, SCM_CREDS);
+#else
 	PUT_ENTRY(sizeof(struct ucred), 0, 0, from_zval_write_ucred,
 			to_zval_read_ucred, SOL_SOCKET, SCM_CREDENTIALS);
 #endif
+#endif
 
 #ifdef SCM_RIGHTS
 	PUT_ENTRY(0, sizeof(int), calculate_scm_rights_space, from_zval_write_fd_array,
@@ -435,7 +443,11 @@ void php_socket_sendrecvmsg_init(INIT_FU
 	REGISTER_LONG_CONSTANT("SCM_RIGHTS",			SCM_RIGHTS,			CONST_CS | CONST_PERSISTENT);
 #endif
 #ifdef SO_PASSCRED
+#if defined(__DragonFly__)
+	REGISTER_LONG_CONSTANT("SCM_CREDS",             	SCM_CREDS,              CONST_CS | CONST_PERSISTENT);
+#else
 	REGISTER_LONG_CONSTANT("SCM_CREDENTIALS",		SCM_CREDENTIALS,	CONST_CS | CONST_PERSISTENT);
+#endif
 	REGISTER_LONG_CONSTANT("SO_PASSCRED",			SO_PASSCRED,		CONST_CS | CONST_PERSISTENT);
 #endif
 
