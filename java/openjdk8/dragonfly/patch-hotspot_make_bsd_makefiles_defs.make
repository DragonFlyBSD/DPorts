--- hotspot/make/bsd/makefiles/defs.make.orig	2016-06-24 23:43:40 UTC
+++ hotspot/make/bsd/makefiles/defs.make
@@ -32,6 +32,9 @@ SLASH_JAVA ?= /java
 # ARCH can be set explicitly in spec.gmk
 ifndef ARCH
   ARCH := $(shell uname -m)
+  ifeq ($(ARCH),x86_64)
+    ARCH=amd64
+  endif
   # Fold little endian PowerPC64 into big-endian (if ARCH is set in
   # hotspot-spec.gmk, this will be done by the configure script).
   ifeq ($(ARCH),ppc64le)
