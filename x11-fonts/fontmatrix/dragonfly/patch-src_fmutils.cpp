--- src/fmutils.cpp.intermediate	2019-10-29 11:45:05.000000000 +0000
+++ src/fmutils.cpp
@@ -12,7 +12,7 @@
 
 #include "fmutils.h"
 
-#if !defined(_WIN32) && !defined(Q_OS_MAC) && !defined(__FreeBSD__)
+#if !defined(_WIN32) && !defined(Q_OS_MAC) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <execinfo.h>
 #include <cxxabi.h>
 #include <cstdlib>
