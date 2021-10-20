--- config.h.orig	1997-07-08 00:42:53 UTC
+++ config.h
@@ -29,12 +29,12 @@
 
 #if defined(SUN)
 #define BIT_32
-#define __BYTE_ORDER 4321
+#define TNEF_BYTE_ORDER 4321
 #undef NEAR_FAR_PTR
 
 #elif defined (HPUX)
 #define BIT_32
-#define __BYTE_ORDER 4321
+#define TNEF_BYTE_ORDER 4321
 #undef NEAR_FAR_PTR
 
 #elif defined(DEC)
@@ -42,15 +42,15 @@
 
 #elif defined(__sgi)
 #define BIT_32
-#define __BYTE_ORDER 4321
+#define TNEF_BYTE_ORDER 4321
 #undef NEAR_FAR_PTR
 
 #elif defined(AIX)
 #undef NEAR_FAR_PTR
-#define __BYTE_ORDER 4321
+#define TNEF_BYTE_ORDER 4321
 #define BIT_32
 
-#elif defined(LINUX)
+#elif defined(LINUX) || defined(__DragonFly__)
 #define BIT_32
 #undef NEAR_FAR_PTR
 
@@ -61,7 +61,7 @@
 #else
 #undef NEAR_FAR_PTR
 #define BIT_32
-#define __BYTE_ORDER 4321
+#define TNEF_BYTE_ORDER 4321
 
 #endif /* OS/MACH TYPE */
 
@@ -104,7 +104,7 @@ typedef unsigned char uint8;
 			        ((((uint32)(x)) & 0xFF0000UL) >> 8) | \
 			        ((((uint32)(x)) & 0xFF000000UL) >> 24))
 
-#if __BYTE_ORDER == 4321
+#if TNEF_BYTE_ORDER == 4321
 #define big_endian(x) (x)
 #define long_big_endian(x) (x)
 #define little_endian(x) (endian_switch(x))
