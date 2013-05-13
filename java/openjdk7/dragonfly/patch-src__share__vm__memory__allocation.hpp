--- hotspot/src/share/vm/memory/allocation.hpp.orig	2012-08-10 18:27:07.000000000 +0200
+++ hotspot/src/share/vm/memory/allocation.hpp	2013-01-03 00:05:57.007992000 +0100
@@ -25,6 +25,7 @@
 #ifndef SHARE_VM_MEMORY_ALLOCATION_HPP
 #define SHARE_VM_MEMORY_ALLOCATION_HPP
 
+#include <machine/int_limits.h>
 #include "runtime/globals.hpp"
 #include "utilities/globalDefinitions.hpp"
 #ifdef COMPILER1
