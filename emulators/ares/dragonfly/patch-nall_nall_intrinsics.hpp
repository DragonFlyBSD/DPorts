--- nall/nall/intrinsics.hpp.orig
+++ nall/nall/intrinsics.hpp
@@ -10,7 +10,7 @@
   #include <machine/endian.h>
 #elif defined(linux) || defined(__linux__)
   #include <endian.h>
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#elif (defined(__FreeBSD__) || defined(__DragonFly__)) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) || defined(__OpenBSD__)
   #include <sys/endian.h>
 #endif
 
@@ -81,7 +81,7 @@
     static constexpr bool Linux   = 1;
     static constexpr bool BSD     = 0;
   };
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#elif (defined(__FreeBSD__) || defined(__DragonFly__)) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) || defined(__OpenBSD__)
   #define PLATFORM_BSD
   struct Platform {
     static constexpr bool Windows = 0;
