--- OrthancFramework/UnitTestsSources/FrameworkTests.cpp.orig	2021-11-14 15:21:42.240230000 +0100
+++ OrthancFramework/UnitTestsSources/FrameworkTests.cpp	2021-11-14 15:22:52.728660000 +0100
@@ -830,7 +830,7 @@
 
 #if defined(__linux__) || defined(__OpenBSD__)
 #include <endian.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <machine/endian.h>
 #endif
 
@@ -853,7 +853,7 @@
    * FreeBSD.
    **/
   
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #  if _BYTE_ORDER == _BIG_ENDIAN
    ASSERT_EQ(Endianness_Big, Toolbox::DetectEndianness());
 #  else // _LITTLE_ENDIAN
@@ -865,7 +865,7 @@
    * Linux.
    **/
   
-#elif defined(__linux__) || defined(__FreeBSD_kernel__)
+#elif defined(__linux__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 
 #if !defined(__BYTE_ORDER)
 #  error Support your platform here
