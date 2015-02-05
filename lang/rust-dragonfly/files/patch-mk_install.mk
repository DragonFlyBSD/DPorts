--- mk/install.mk.orig	2015-01-28 03:00:43 UTC
+++ mk/install.mk
@@ -15,12 +15,6 @@ MAYBE_DISABLE_VERIFY=
 endif
 
 install:
-ifeq (root user, $(USER) $(patsubst %,user,$(SUDO_USER)))
-# Build the dist as the original user
-	$(Q)sudo -u "$$SUDO_USER" $(MAKE) prepare_install
-else
-	$(Q)$(MAKE) prepare_install
-endif
 ifeq ($(CFG_DISABLE_DOCS),)
 	$(Q)cd tmp/empty_dir && sh ../../tmp/dist/$(DOC_PKG_NAME)-$(CFG_BUILD)/install.sh --prefix="$(DESTDIR)$(CFG_PREFIX)" --libdir="$(DESTDIR)$(CFG_LIBDIR)" --mandir="$(DESTDIR)$(CFG_MANDIR)" "$(MAYBE_DISABLE_VERIFY)"
 endif
