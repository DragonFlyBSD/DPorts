--- coreconf/arch.mk.orig	2014-01-03 14:59:10.000000000 -0500
+++ coreconf/arch.mk
@@ -117,6 +117,10 @@ ifeq (,$(filter-out Linux FreeBSD IRIX,$
     OS_RELEASE := $(shell echo $(OS_RELEASE) | sed 's/-.*//')
 endif
 
+ifeq ($(OS_ARCH),DragonFly)
+OS_RELEASE := $(shell awk '/^\#define[[:blank:]]__DragonFly_version/ {a=int($$3/100000); b=int(($$3-(a*100000))/100); print a "." b}' < /usr/include/sys/param.h)
+endif
+
 ifeq ($(OS_ARCH),Linux)
     OS_RELEASE := $(subst ., ,$(OS_RELEASE))
     ifneq ($(words $(OS_RELEASE)),1)
