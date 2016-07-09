--- lib/xparam/xp_raw_bytes.h.orig	2003-05-26 14:29:12.000000000 +0300
+++ lib/xparam/xp_raw_bytes.h
@@ -34,6 +34,7 @@
  * If you do not wish that, delete this exception notice.  
  */
 
+#include <cstring>
 #include <vector>
 
 namespace xParam_internal {
