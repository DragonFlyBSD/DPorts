--- builders/resid-builder/src/resid-builder.cpp.orig	2004-06-14 20:07:58 UTC
+++ builders/resid-builder/src/resid-builder.cpp
@@ -42,6 +42,7 @@
 #ifdef HAVE_EXCEPTIONS
 #   include <new>
 #endif
+#include <cstring> // for strncpy()
 
 #include "resid.h"
 #include "resid-emu.h"
