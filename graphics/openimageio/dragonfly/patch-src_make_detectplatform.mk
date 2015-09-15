--- src/make/detectplatform.mk.orig	2014-11-25 07:10:44.000000000 +0200
+++ src/make/detectplatform.mk
@@ -59,6 +59,11 @@ ifeq (${platform},unknown)
     platform := macosx
   endif
 
+  # DragonFly BSD
+  ifeq (${uname},dragonfly)
+    platform := dragonfly
+  endif
+
   # If we haven't been able to determine the platform from uname, use
   # whatever is in $ARCH, if it's set.
   ifeq (${platform},unknown)
