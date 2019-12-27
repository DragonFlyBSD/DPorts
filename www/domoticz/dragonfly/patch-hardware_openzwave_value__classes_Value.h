--- hardware/openzwave/value_classes/Value.h.orig	2019-05-10 09:37:55 UTC
+++ hardware/openzwave/value_classes/Value.h
@@ -29,7 +29,7 @@
 #define _Value_H
 
 #include <string>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <time.h>
 #endif
 #include "Defs.h"
