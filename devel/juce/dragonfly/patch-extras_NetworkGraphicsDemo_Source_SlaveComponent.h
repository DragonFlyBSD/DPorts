--- extras/NetworkGraphicsDemo/Source/SlaveComponent.h.orig	2021-03-26 08:19:54 UTC
+++ extras/NetworkGraphicsDemo/Source/SlaveComponent.h
@@ -148,6 +148,8 @@ private:
         return "OpenBSD";
 #elif defined(__NetBSD__)
         return "NetBSD";
+#elif defined(__DragonFly__)
+        return "DragonFly";
 #else
         #error Unknown BSD
 #endif
