--- ../Inlines-1.4.0/Alloc.hh.orig	2005-03-26 22:29:01.000000000 +0200
+++ ../Inlines-1.4.0/Alloc.hh
@@ -25,6 +25,7 @@
 #include <sys/mman.h>
 #include <string>
 #include <stdexcept>
+#include <cstring> // for memcpy
 
 
 #ifndef ALLOC_HH
