--- cpp/src/IceUtil/Exception.cpp.orig	2013-10-04 15:48:14 UTC
+++ cpp/src/IceUtil/Exception.cpp
@@ -29,7 +29,7 @@
 #include <cstdlib>
 
 
-#if defined(__GNUC__) && !defined(__sun) && !defined(__FreeBSD__) && !defined(__MINGW32__)
+#if defined(__GNUC__) && !defined(__sun) && !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(__MINGW32__)
 #  include <execinfo.h>
 #  include <cxxabi.h>
 #  define ICE_STACK_TRACES
