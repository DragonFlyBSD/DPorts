--- libdnf/config.h.intermediate	2021-12-24 11:45:20.000000000 +0000
+++ libdnf/config.h
@@ -24,6 +24,10 @@
 #include <bits/wordsize.h>
 #endif
 
+#if !defined(__WORDSIZE) && defined(__DragonFly__)
+#define __WORDSIZE 64
+#endif
+
 #if __WORDSIZE == 32
 #include "config-32.h"
 #elif __WORDSIZE == 64
