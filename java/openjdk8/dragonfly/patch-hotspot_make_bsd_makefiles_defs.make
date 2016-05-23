--- hotspot/make/bsd/makefiles/defs.make.orig	2016-05-21 17:53:23 UTC
+++ hotspot/make/bsd/makefiles/defs.make
@@ -32,6 +32,9 @@ SLASH_JAVA ?= /java
 # ARCH can be set explicitly in spec.gmk
 ifndef ARCH
   ARCH := $(shell uname -m)
+  ifeq ($(ARCH),x86_64)
+    ARCH=amd64
+  endif
 endif
 PATH_SEP = :
 ifeq ($(LP64), 1)
