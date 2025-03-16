--- makefile_include.mk.ori	Thu Feb 27 12:11:27 2025
+++ makefile_include.mk	Thu Feb 27 12:12:23 2025
@@ -26,6 +26,10 @@ ifeq ($(PLATFORM),FreeBSD)
   # XXX: FreeBSD needs extra escaping for some reason
   CSTR := $$$(CSTR)
 endif
+ifeq ($(PLATFORM),DragonFly)
+  # XXX: DragonFly needs extra escaping for some reason
+  CSTR := $$$(CSTR)
+endif
 ifneq (,$(shell echo $(CSTR) | $(CC) -E - | grep CLANG))
   CC := $(CROSS_COMPILE)clang
 else
@@ -109,6 +113,8 @@ LTM_LIBTOOLFLAGS += $(LIBTOOLFLAGS)
 
 
 ifeq ($(PLATFORM),FreeBSD)
+  _ARCH := $(shell sysctl -b hw.machine_arch)
+ifeq ($(PLATFORM),DragonFly)
   _ARCH := $(shell sysctl -b hw.machine_arch)
 else
   _ARCH := $(shell uname -m)
