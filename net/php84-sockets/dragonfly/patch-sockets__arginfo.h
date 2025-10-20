--- sockets_arginfo.h.orig	2023-12-20 06:28:06 UTC
+++ sockets_arginfo.h
@@ -397,17 +397,25 @@ static void register_sockets_symbols(int
 	REGISTER_LONG_CONSTANT("SO_BINDTODEVICE", SO_BINDTODEVICE, CONST_PERSISTENT);
 #endif
 #if defined(SO_USER_COOKIE)
+#ifndef __DragonFly__
 	REGISTER_LONG_CONSTANT("SO_LABEL", SO_LABEL, CONST_PERSISTENT);
 #endif
+#endif
 #if defined(SO_USER_COOKIE)
+#ifndef __DragonFly__
 	REGISTER_LONG_CONSTANT("SO_PEERLABEL", SO_PEERLABEL, CONST_PERSISTENT);
 #endif
+#endif
 #if defined(SO_USER_COOKIE)
+#ifndef __DragonFly__
 	REGISTER_LONG_CONSTANT("SO_LISTENQLIMIT", SO_LISTENQLIMIT, CONST_PERSISTENT);
 #endif
+#endif
 #if defined(SO_USER_COOKIE)
+#ifndef __DragonFly__
 	REGISTER_LONG_CONSTANT("SO_LISTENQLEN", SO_LISTENQLEN, CONST_PERSISTENT);
 #endif
+#endif
 #if defined(SO_USER_COOKIE)
 	REGISTER_LONG_CONSTANT("SO_USER_COOKIE", SO_USER_COOKIE, CONST_PERSISTENT);
 #endif
