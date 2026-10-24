--- src/cbang/os/CPURegsAArch64.cpp.orig
+++ src/cbang/os/CPURegsAArch64.cpp
@@ -37,6 +37,8 @@
 
 #include <cbang/String.h>
 #include <cbang/Catch.h>
+
+#include <cstring>
 
 
 #if defined(__linux__)
