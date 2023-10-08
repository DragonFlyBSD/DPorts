--- mlir/lib/ExecutionEngine/CRunnerUtils.cpp.orig	2023-07-11 17:53:31 UTC
+++ mlir/lib/ExecutionEngine/CRunnerUtils.cpp
@@ -16,7 +16,7 @@
 #include "mlir/ExecutionEngine/Msan.h"
 
 #ifndef _WIN32
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <cstdlib>
 #else
 #include <alloca.h>
