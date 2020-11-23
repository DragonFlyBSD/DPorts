--- src/getaddrinfo_async.c.orig	2016-02-13 13:19:45 UTC
+++ src/getaddrinfo_async.c
@@ -493,10 +493,10 @@ get_port(const char *servname, const cha
 #endif
 #ifdef HAVE_GETSERVBYNAME_R_4_ARGS
 	r = getservbyname_r(servname, proto, &se, &sed);
+	port = ntohs(se.s_port);
 #else
 	r = -1;
 #endif
-	port = ntohs(se.s_port);
 #ifdef HAVE_ENDSERVENT_R
 	endservent_r(&sed);
 #endif
