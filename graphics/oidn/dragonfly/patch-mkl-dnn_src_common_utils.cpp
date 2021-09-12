--- mkl-dnn/src/common/utils.cpp.intermediate	2021-09-11 11:06:32 UTC
+++ mkl-dnn/src/common/utils.cpp
@@ -19,7 +19,7 @@
 #include <windows.h>
 #endif
 
-#if defined __linux__ || defined __APPLE__ || defined __FreeBSD__
+#if defined __linux__ || defined __APPLE__ || defined __FreeBSD__ || defined __DragonFly__
 #include <unistd.h>
 #endif
 
