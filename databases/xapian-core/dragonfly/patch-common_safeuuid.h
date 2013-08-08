--- common/safeuuid.h.orig	2013-04-17 00:03:07.000000000 +0000
+++ common/safeuuid.h
@@ -55,6 +55,7 @@ inline void uuid_unparse_lower(uuid_t uu
 
 // FreeBSD/NetBSD UUID API.
 # include <uuid.h>
+# include <cstdlib>
 # include <cstring>
 # include <exception>
 
