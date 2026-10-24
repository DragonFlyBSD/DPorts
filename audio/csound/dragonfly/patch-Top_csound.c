--- Top/csound.c.orig
+++ Top/csound.c
@@ -62,7 +62,7 @@
 //#include "cs_par_dispatch.h"
 #include "find_opcode.h"
 
-#if defined(linux) || defined(__FreeBSD__) || defined(__HAIKU__)|| defined(__EMSCRIPTEN__)||defined(__CYGWIN__)
+#if defined(linux) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__HAIKU__)|| defined(__EMSCRIPTEN__)||defined(__CYGWIN__)
 #define PTHREAD_SPINLOCK_INITIALIZER 0
 #endif
 
