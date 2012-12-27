--- ../../security/coreconf/arch.mk.intermediate	2012-12-27 22:55:58.000000000 +0100
+++ ../../security/coreconf/arch.mk	2012-12-27 22:56:24.000000000 +0100
@@ -113,7 +113,7 @@
 # IRIX 6.5-ALPHA-1289139620.
 #
 
-ifeq (,$(filter-out Linux FreeBSD IRIX,$(OS_ARCH)))
+ifeq (,$(filter-out Linux DragonFly FreeBSD IRIX,$(OS_ARCH)))
     OS_RELEASE := $(shell echo $(OS_RELEASE) | sed 's/-.*//')
 endif
 
