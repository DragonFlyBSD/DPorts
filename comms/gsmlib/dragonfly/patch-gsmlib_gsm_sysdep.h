--- gsmlib/gsm_sysdep.h.intermediate	2016-07-13 19:45:15 UTC
+++ gsmlib/gsm_sysdep.h
@@ -20,6 +20,9 @@
 #include <gsm_config.h>
 #endif
 
+#include <cstdlib>
+#include <cstring>
+
 extern "C" {
 
   // this is mostly taken from the autoconf documentation (WIN32 added)
