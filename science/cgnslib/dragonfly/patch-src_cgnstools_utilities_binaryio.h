--- src/cgnstools/utilities/binaryio.h.intermediate	2013-03-21 09:02:20.457366000 +0000
+++ src/cgnstools/utilities/binaryio.h
@@ -98,7 +98,8 @@
 # define MACH_LOCAL     MACH_WIN32
 #endif
 
-#if defined(__linux) || defined(__CYGWIN__) || defined(__FreeBSD__)
+#if defined(__linux) || defined(__CYGWIN__) || defined(__FreeBSD__) \
+ || defined(__DragonFly__)
 # define ARCH_LOCAL     ARCH_BSIEEE
 # define MACH_LOCAL     MACH_LINUX
 #endif
