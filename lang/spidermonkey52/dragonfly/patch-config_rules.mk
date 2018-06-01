--- config/rules.mk.orig	2018-01-11 18:49:42 UTC
+++ config/rules.mk
@@ -418,7 +418,7 @@ endif # AIX
 #
 # Linux: add -Bsymbolic flag for components
 #
-ifeq ($(OS_ARCH),Linux)
+#ifeq ($(OS_ARCH),Linux)
 ifdef IS_COMPONENT
 EXTRA_DSO_LDOPTS += -Wl,-Bsymbolic
 endif
@@ -426,7 +426,8 @@ ifdef LD_VERSION_SCRIPT
 EXTRA_DSO_LDOPTS += -Wl,--version-script,$(LD_VERSION_SCRIPT)
 EXTRA_DEPS += $(LD_VERSION_SCRIPT)
 endif
-endif
+#endif
+EXTRA_DSO_LDOPTS += -Wl,-soname,lib$(JS_LIBRARY_NAME).so.0
 
 ifdef SYMBOLS_FILE
 ifeq ($(OS_TARGET),WINNT)
