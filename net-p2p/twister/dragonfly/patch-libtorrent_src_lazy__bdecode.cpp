--- libtorrent/src/lazy_bdecode.cpp.orig	2015-12-21 00:45:59.000000000 +0200
+++ libtorrent/src/lazy_bdecode.cpp
@@ -39,6 +39,10 @@ POSSIBILITY OF SUCH DAMAGE.
 #include <iostream>
 #endif
 
+#ifdef __DragonFly__
+#include <machine/int_limits.h>
+#endif
+
 namespace
 {
 	const int lazy_entry_grow_factor = 150; // percent
