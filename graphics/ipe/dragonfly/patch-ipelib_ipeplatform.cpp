--- ipelib/ipeplatform.cpp.intermediate	2019-05-15 17:50:30 UTC
+++ ipelib/ipeplatform.cpp
@@ -50,6 +50,7 @@
 #endif
 #if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <xlocale.h>
+#include <sys/param.h>
 #include <sys/errno.h>
 #endif
 #include <cstdlib>
