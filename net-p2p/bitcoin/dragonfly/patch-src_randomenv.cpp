--- src/randomenv.cpp.orig
+++ src/randomenv.cpp
@@ -59,6 +59,7 @@
 
 #if defined(__APPLE__) || \
     defined(__FreeBSD__) || \
+    defined(__DragonFly__) || \
     defined(__NetBSD__) || \
     defined(__OpenBSD__) || \
     defined(__illumos__)
