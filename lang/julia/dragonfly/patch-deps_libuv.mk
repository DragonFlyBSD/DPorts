--- deps/libuv.mk.orig	2016-09-20 05:54:21.000000000 +0300
+++ deps/libuv.mk
@@ -27,7 +27,11 @@ else
 UV_FLAGS := --disable-shared $(UV_MFLAGS)
 endif
 
-$(BUILDDIR)/$(LIBUV_SRC_DIR)/config.status: $(SRCDIR)/srccache/$(LIBUV_SRC_DIR)/configure
+$(SRCDIR)/srccache/$(LIBUV_SRC_DIR)/bundled_libuv_dfly.patch-applied: | $(SRCDIR)/srccache/$(LIBUV_SRC_DIR)/configure
+	cd $(SRCDIR)/srccache/$(LIBUV_SRC_DIR) && patch -f < $(SRCDIR)/patches/bundled_libuv_dfly.patch
+	echo 1 > $@
+
+$(BUILDDIR)/$(LIBUV_SRC_DIR)/config.status: $(SRCDIR)/srccache/$(LIBUV_SRC_DIR)/configure $(SRCDIR)/srccache/$(LIBUV_SRC_DIR)/bundled_libuv_dfly.patch-applied
 	touch -c $(SRCDIR)/srccache/$(LIBUV_SRC_DIR)/aclocal.m4 # touch a few files to prevent autogen from getting called
 	touch -c $(SRCDIR)/srccache/$(LIBUV_SRC_DIR)/Makefile.in
 	touch -c $(SRCDIR)/srccache/$(LIBUV_SRC_DIR)/configure
