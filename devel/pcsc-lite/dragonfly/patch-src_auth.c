--- src/auth.c.orig	Tue Dec 24 10:16:27 2024
+++ src/auth.c	Sun Nov
@@ -58,13 +58,19 @@
 #include <polkit/polkit.h>
 #include <stdbool.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__)
 
 #include <sys/ucred.h>
 typedef struct xucred platform_cred;
 #define	CRED_PID(uc)	(uc).cr_pid
 #define	CRED_UID(uc)	(uc).cr_uid
 
+#elif defined(__DragonFly__)
+#include <sys/ucred.h>
+typedef struct xucred platform_cred;
+#define	CRED_PID(uc)	-1
+#define	CRED_UID(uc)	(uc).cr_uid
+
 #else
 
 typedef struct ucred platform_cred;
@@ -95,7 +101,7 @@ unsigned IsClientAuthorized(int socket, const char* ac
 
 	cr_len = sizeof(cr);
 #ifdef LOCAL_PEERCRED
-	ret = getsockopt(socket, SOL_LOCAL, LOCAL_PEERCRED, &cr, &cr_len);
+	ret = getsockopt(socket, 0, LOCAL_PEERCRED, &cr, &cr_len);
 #else
 	ret = getsockopt(socket, SOL_SOCKET, SO_PEERCRED, &cr, &cr_len);
 #endif
