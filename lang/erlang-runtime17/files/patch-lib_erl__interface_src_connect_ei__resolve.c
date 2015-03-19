
$FreeBSD: head/lang/erlang-runtime17/files/patch-lib_erl__interface_src_connect_ei__resolve.c 340725 2014-01-22 17:40:44Z mat $

--- lib/erl_interface/src/connect/ei_resolve.c.orig
+++ lib/erl_interface/src/connect/ei_resolve.c
@@ -621,7 +621,8 @@
 
   return result;
 #else
-  return gethostbyname_r(name,hostp,buffer,buflen,h_errnop);
+  struct hostent *dummy;
+  return gethostbyname_r(name,hostp,buffer,buflen,&dummy,h_errnop);
 #endif
 #endif
 #endif
