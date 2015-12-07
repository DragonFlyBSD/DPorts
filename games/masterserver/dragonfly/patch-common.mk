--- common.mk.bak	2015-12-07 10:17:15.000000000 +0200
+++ common.mk
@@ -24,6 +24,15 @@ LDFLAGS			= -lpthread -ldl
 LDFLAGS_PLUGIN	= -shared -lm
 endif
 
+ifeq "$(PLATFORM)" "DragonFly"
+CFLAGS_MAIN		= $(CFLAGS) -rdynamic \
+		-DMASTERSERVER_LIB_DIR=\"$(libdir)/masterserver\"
+CFLAGS_PLUGIN	= $(CFLAGS) -fPIC
+CFLAGS_TESTS	= $(CFLAGS) -lm
+LDFLAGS			= -pthread
+LDFLAGS_PLUGIN	= -shared -lm
+endif
+
 ifeq "$(PLATFORM)" "FreeBSD"
 CFLAGS_MAIN		= $(CFLAGS) -rdynamic \
 		-DMASTERSERVER_LIB_DIR=\"$(libdir)/masterserver\"
