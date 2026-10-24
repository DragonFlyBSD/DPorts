--- config.mk.orig
+++ config.mk
@@ -162,8 +162,8 @@
 # XEvil is all screwed up.
 freebsd:
 	@$(MAKE) CC="c++" \
-CFLAGS="-DUSE_RANDOM -DPROTECTED_IS_PUBLIC -DMSEC_PER_CLOCK=8 -DUNAME_USR_BIN" \
-INCL_DIRS="-I/usr/X11R6/include" LIBS_DIRS="-L/usr/X11R6/lib" \
+CFLAGS="-DUSE_RANDOM -DPROTECTED_IS_PUBLIC -DMSEC_PER_CLOCK=8 -DUNAME_USR_BIN -DUSE_UINT_NET_LENGTH" \
+INCL_DIRS="-I%%LOCALBASE%%/include" LIBS_DIRS="-L%%LOCALBASE%%/lib" \
 OBJ_DIR=$(DEPTH)/x11/FREEBSD PCKG_NAME="freebsd" \
 LIBS="-lXpm -lX11 -lm" $(TARGETS)
 
