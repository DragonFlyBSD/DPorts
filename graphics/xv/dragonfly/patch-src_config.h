--- src/config.h.orig
+++ src/config.h
@@ -70,7 +70,7 @@
 #define UNCOMPRESS "/usr/ucb/uncompress"
 
 #if defined(hpux) || defined(SVR4) || \
-    defined(__386BSD__) || defined(__FreeBSD__) || defined(__NetBSD__) || \
+    defined(__386BSD__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || \
     defined(__linux__)
     /*
      I want to use BSD macro for checking if this OS is *BSD or not,
