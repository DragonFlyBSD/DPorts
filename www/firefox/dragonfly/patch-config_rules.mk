--- config/rules.mk.orig	2012-11-30 04:12:16.000000000 +0100
+++ config/rules.mk	2012-12-26 14:15:02.586063000 +0100
@@ -462,6 +462,12 @@
 endif
 endif
 
+ifeq ($(OS_ARCH),DragonFly)
+ifdef IS_COMPONENT
+EXTRA_DSO_LDOPTS += -Wl,-Bsymbolic
+endif
+endif
+
 ifeq ($(OS_ARCH),NetBSD)
 ifneq (,$(filter arc cobalt hpcmips mipsco newsmips pmax sgimips,$(OS_TEST)))
 ifeq ($(MODULE),layout)
