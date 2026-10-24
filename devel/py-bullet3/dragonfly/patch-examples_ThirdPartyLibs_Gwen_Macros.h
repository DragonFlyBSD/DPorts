--- examples/ThirdPartyLibs/Gwen/Macros.h.orig
+++ examples/ThirdPartyLibs/Gwen/Macros.h
@@ -5,7 +5,7 @@
 #include <stdlib.h>
 #include <stdarg.h>
 #include <stdio.h>  // vsnprintf
-#if !defined(__APPLE__) && !defined(__OpenBSD__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__OpenBSD__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <malloc.h>
 #else
 #include <stdlib.h>
