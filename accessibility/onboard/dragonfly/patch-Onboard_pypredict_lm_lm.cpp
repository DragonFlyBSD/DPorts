--- Onboard/pypredict/lm/lm.cpp.orig
+++ Onboard/pypredict/lm/lm.cpp
@@ -19,7 +19,7 @@
 
 #include <stdlib.h>
 #include <stdio.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <stdio.h>
 #include <stdarg.h>
 #include <stdlib.h>
