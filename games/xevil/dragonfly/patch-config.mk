--- config.mk.bak	2015-09-22 13:53:36.000000000 +0300
+++ config.mk
@@ -170,6 +170,17 @@ OBJ_DIR=$(DEPTH)/x11/FREEBSD PCKG_NAME="
 LIBS="-lXpm -lX11 -lm" $(TARGETS)
 
 
+DragonFly:
+	@$(MAKE) dragonfly
+
+# The -DMSEC_PER_CLOCK=8 is kind of a hack, take it out if the game speed of 
+# XEvil is all screwed up.
+dragonfly:
+	@$(MAKE) CC="${CXX}" \
+CFLAGS="-DUSE_RANDOM -DUSE_UINT_NET_LENGTH -DUNAME_USR_BIN ${CXXFLAGS}" \
+INCL_DIRS="-I$(LOCALBASE)/include" LIBS_DIRS="-L$(LOCALBASE)/lib" \
+OBJ_DIR=$(DEPTH)/x11/DRAGONFLY PCKG_NAME="dragonfly" \
+LIBS="-lXpm -lX11 -lm" $(TARGETS)
 
 hp700:
 	@$(MAKE) CC="g++" LIBS="-lXpm -lX11 -lm" INCL_DIRS="" CFLAGS="-DUSE_RANDOM -DRANDOM_NEEDS_PROTOTYPES -DMATH_H_IS_CC -DPROTECTED_IS_PUBLIC" \
