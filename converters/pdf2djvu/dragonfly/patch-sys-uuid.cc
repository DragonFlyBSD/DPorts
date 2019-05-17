--- sys-uuid.cc.orig	2019-01-02 15:46:36 UTC
+++ sys-uuid.cc
@@ -68,6 +68,7 @@ void uuid_unparse_lower(uuid_t &uu, char
 
 #include <cassert>
 #include <cerrno>
+#include <cstring>
 
 #include <stdint.h>
 #include <uuid.h>
