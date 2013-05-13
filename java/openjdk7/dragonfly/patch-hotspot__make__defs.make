--- hotspot/make/defs.make.orig	2012-08-10 18:23:01.000000000 +0200
+++ hotspot/make/defs.make	2012-12-28 13:36:30.108163000 +0100
@@ -124,6 +124,9 @@
   ifeq ($(OS), Darwin)
     OS=bsd
   endif
+  ifeq ($(OS), DragonFly)
+    OS=bsd
+  endif
   HOST := $(shell uname -n)
 endif
 
