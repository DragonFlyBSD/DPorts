--- dependencies/osi_clp/CoinUtils/src/CoinTime.hpp.orig	2017-02-20 05:44:00 UTC
+++ dependencies/osi_clp/CoinUtils/src/CoinTime.hpp
@@ -19,7 +19,7 @@
 #  pragma warning(disable:4786)
 #else
 // MacOS-X and FreeBSD needs sys/time.h
-#if defined(__MACH__) || defined (__FreeBSD__)
+#if defined(__MACH__) || defined (__FreeBSD__) || defined (__DragonFly__)
 #include <sys/time.h>
 #endif
 #if !defined(__MSVCRT__)
