--- SimTKmath/Optimizers/src/IpOpt/IpTimedTask.hpp.orig	2018-06-12 01:04:33 UTC
+++ SimTKmath/Optimizers/src/IpOpt/IpTimedTask.hpp
@@ -26,7 +26,7 @@
 #  pragma warning(disable:4786)
 #else
 // MacOS-X and FreeBSD needs sys/time.h
-# if defined(__MACH__) || defined (__FreeBSD__)
+# if defined(__MACH__) || defined (__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/time.h>
 # endif
 # if !defined(__MSVCRT__)
