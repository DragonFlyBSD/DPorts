--- src/include/scripting/sqplus/sqplus.h.orig	2020-03-28 12:36:02 UTC
+++ src/include/scripting/sqplus/sqplus.h
@@ -17,7 +17,7 @@
   #include <malloc/malloc.h>
 #else
   // C::B patch: support for FreeBSD
-  #ifdef __FreeBSD__
+  #if defined(__FreeBSD__) || defined(__DragonFly__)
     #include <stdlib.h>
   #else
     #include <malloc.h>
