--- coreconf/arch.mk.intermediate	2013-07-22 22:45:26.067756000 +0000
+++ coreconf/arch.mk
@@ -113,7 +113,7 @@ endif
 # IRIX 6.5-ALPHA-1289139620.
 #
 
-ifeq (,$(filter-out Linux FreeBSD IRIX,$(OS_ARCH)))
+ifeq (,$(filter-out Linux DragonFly FreeBSD IRIX,$(OS_ARCH)))
     OS_RELEASE := $(shell echo $(OS_RELEASE) | sed 's/-.*//')
 endif
 
