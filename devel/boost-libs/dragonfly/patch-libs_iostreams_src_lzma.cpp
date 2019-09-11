Just version check does not mean that liblzma was compiled with
threading support.

--- libs/iostreams/src/lzma.cpp.orig	2019-08-14 12:02:50 UTC
+++ libs/iostreams/src/lzma.cpp
@@ -18,6 +18,10 @@
 #include <boost/iostreams/detail/config/dyn_link.hpp>
 #include <boost/iostreams/filter/lzma.hpp>
 
+#ifdef __DragonFly__
+/* prefer to avoid implicit multithreading */
+#define BOOST_IOSTREAMS_LZMA_NO_MULTITHREADED
+#endif
 
 #ifndef BOOST_IOSTREAMS_LZMA_NO_MULTITHREADED
     #if LZMA_VERSION < 50020002
