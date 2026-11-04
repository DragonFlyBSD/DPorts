--- src/gx_head/gui/machine.cpp.orig	2025-08-25 10:07:04 UTC
+++ src/gx_head/gui/machine.cpp
@@ -36,7 +36,7 @@
 #endif
 
 
-#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(_WINDOWS)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(_WINDOWS)
 #include <malloc.h>
 
 void set_memory_allocation() {
