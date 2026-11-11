--- src/net/KqueueEventSource.hpp.orig
+++ src/net/KqueueEventSource.hpp
@@ -19,7 +19,7 @@
 #include <cstddef>
 #include <cstdint>
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__APPLE__) || (defined(__FreeBSD__) || defined(__DragonFly__)) || defined(__OpenBSD__) || defined(__NetBSD__)
 
     #include <unordered_map>
 
