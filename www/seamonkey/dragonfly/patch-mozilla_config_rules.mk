--- mozilla/config/rules.mk.intermediate	2014-12-13 10:25:51 UTC
+++ mozilla/config/rules.mk
@@ -416,6 +416,12 @@ EXTRA_DSO_LDOPTS += -Wl,-Bsymbolic
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
 ifneq (,$(filter layout/%,$(relativesrcdir)))
