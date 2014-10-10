--- cpp/include/IceUtil/Shared.h.orig	2013-10-04 15:48:14 UTC
+++ cpp/include/IceUtil/Shared.h
@@ -29,7 +29,7 @@
 
 #   define ICE_HAS_GCC_BUILTINS
 
-#elif (defined(__APPLE__) || defined(__linux) || defined(__FreeBSD__)) && (defined(__i386) || defined(__x86_64)) && !defined(__ICC)
+#elif (defined(__APPLE__) || defined(__linux) || defined(__FreeBSD__) || defined(__DragonFly__)) && (defined(__i386) || defined(__x86_64)) && !defined(__ICC)
 
 #   define ICE_HAS_ATOMIC_FUNCTIONS
 
