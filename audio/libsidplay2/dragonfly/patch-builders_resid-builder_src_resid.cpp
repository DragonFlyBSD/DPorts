--- builders/resid-builder/src/resid.cpp.orig	2004-06-14 20:07:58 UTC
+++ builders/resid-builder/src/resid.cpp
@@ -21,6 +21,7 @@
 #ifdef HAVE_EXCEPTIONS
 #   include <new>
 #endif
+#include <cstring> // for strlen()
 
 #include "resid.h"
 #include "resid-emu.h"
