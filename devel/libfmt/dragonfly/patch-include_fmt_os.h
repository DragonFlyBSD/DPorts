--- include/fmt/os.h.orig	2024-01-03 19:17:28 UTC
+++ include/fmt/os.h
@@ -15,7 +15,7 @@
 
 #include "format.h"
 
-#if defined __APPLE__ || defined(__FreeBSD__)
+#if defined __APPLE__ || defined(__FreeBSD__) || defined(__DragonFly__)
 #  if FMT_HAS_INCLUDE(<xlocale.h>)
 #    include <xlocale.h>  // for LC_NUMERIC_MASK on OS X
 #  endif
