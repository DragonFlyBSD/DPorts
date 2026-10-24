--- H/remote.h.orig
+++ H/remote.h
@@ -42,7 +42,7 @@
     #ifdef MACOSX
       #include <net/if.h>
     #endif
-    #ifdef __FreeBSD__
+    #if defined(__FreeBSD__) || defined(__DragonFly__)
       #include <net/if.h>
     #endif
     #ifdef linux
