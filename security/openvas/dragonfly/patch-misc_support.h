--- misc/support.h.orig
+++ misc/support.h
@@ -13,7 +13,7 @@
 
 // This structure does not exist on MacOS or FreeBSD systems
 #ifndef s6_addr32
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define s6_addr32 __u6_addr.__u6_addr32
 #endif // __APPLE__ || __FreeBSD__
 #endif // !s6_addr32
