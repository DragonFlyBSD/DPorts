--- libharvid/timecode.h.orig	2017-01-11 09:33:06.00 UTC
+++ libharvid/timecode.h
@@ -23,6 +23,7 @@
 #include <inttypes.h>
 #include <stdint.h>
 
+#ifndef __DragonFly__
 #if (!defined int32_t && !defined __int8_t_defined && !defined _INT32_T)
 typedef int int32_t;
 #endif
@@ -34,6 +35,7 @@ typedef long int int64_t;
 typedef long long int int64_t;
 #endif
 #endif
+#endif
 
 /**
  * classical timecode
