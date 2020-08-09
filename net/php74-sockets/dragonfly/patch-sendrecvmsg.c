--- sendrecvmsg.c.orig	2020-05-12 07:02:25 UTC
+++ sendrecvmsg.c
@@ -25,7 +25,9 @@
 #ifdef ZTS
 #include <TSRM/TSRM.h>
 #endif
-
+#ifdef __DragonFly__
+#include <sys/ucred.h>
+#endif
 #define MAX_USER_BUFF_SIZE ((size_t)(100*1024*1024))
 #define DEFAULT_BUFF_SIZE 8192
 #define MAX_ARRAY_KEY_SIZE 128
@@ -124,8 +126,13 @@ static void init_ancillary_registry(void
 #endif
 
 #ifdef SO_PASSCRED
+#if !defined(__DragonFly__)
 	PUT_ENTRY(sizeof(struct ucred), 0, 0, from_zval_write_ucred,
 			to_zval_read_ucred, SOL_SOCKET, SCM_CREDENTIALS);
+#else
+	PUT_ENTRY(sizeof(struct cmsgcred), 0, 0, from_zval_write_ucred,
+			to_zval_read_ucred, SOL_SOCKET, SCM_CREDS);
+#endif	
 #endif
 
 #ifdef SCM_RIGHTS
@@ -440,7 +447,11 @@ void php_socket_sendrecvmsg_init(INIT_FU
 	REGISTER_LONG_CONSTANT("SCM_RIGHTS",			SCM_RIGHTS,			CONST_CS | CONST_PERSISTENT);
 #endif
 #ifdef SO_PASSCRED
-	REGISTER_LONG_CONSTANT("SCM_CREDENTIALS",		SCM_CREDENTIALS,	CONST_CS | CONST_PERSISTENT);
+#if !defined(__DragonFly__)
+	REGISTER_LONG_CONSTANT("SCM_CREDENTIALS",		SCM_CREDEDENTIALS,	CONST_CS | CONST_PERSISTENT);
+#else
+	REGISTER_LONG_CONSTANT("SCM_CREDS",		SCM_CREDS,		CONST_CS | CONST_PERSISTENT);
+#endif
 	REGISTER_LONG_CONSTANT("SO_PASSCRED",			SO_PASSCRED,		CONST_CS | CONST_PERSISTENT);
 #endif
 
