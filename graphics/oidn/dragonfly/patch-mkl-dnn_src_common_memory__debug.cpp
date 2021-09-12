--- mkl-dnn/src/common/memory_debug.cpp.intermediate	2021-09-11 11:05:27 UTC
+++ mkl-dnn/src/common/memory_debug.cpp
@@ -21,7 +21,7 @@
 #include <windows.h>
 #endif
 
-#if defined __linux__ || defined __APPLE__ || defined __FreeBSD__
+#if defined __linux__ || defined __APPLE__ || defined __FreeBSD__ || defined __DragonFly__
 #include <unistd.h>
 #include <sys/mman.h>
 #endif
