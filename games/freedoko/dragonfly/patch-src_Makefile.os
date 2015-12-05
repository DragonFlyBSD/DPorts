--- Makefile.os.bak	2015-12-05 19:16:25.000000000 +0200
+++ Makefile.os
@@ -69,6 +69,26 @@ ifeq ($(OPERATING_SYSTEM), Linux_to_Wind
 	endif
 endif
 
+ifeq ($(OPERATING_SYSTEM), DragonFly)
+	PROGRAM ?= FreeDoko
+	CXX ?= c++
+	STRIP ?= strip
+	CXXFLAGS ?= -Wall -Werror -O2
+	DEPGEN_FLAGS ?= -MMD -MP
+	override CPPFLAGS += -DLINUX
+	ifeq ($(USE_UI_GTKMM), true)
+		INCLUDE_GTKMM ?= $(shell pkg-config --cflags gtkmm-2.4)
+		LIBS_GTKMM ?= $(shell pkg-config --libs gtkmm-2.4)
+	endif
+	ifeq ($(USE_NETWORK), true)
+		INCLUDE_NETWORK += $(shell pkg-config --cflags glib-2.0 gnet-2.0)
+		LIBS_NETWORK += $(shell pkg-config --libs glib-2.0 gnet-2.0)
+	endif
+	ifeq ($(USE_THREADS), true)
+		override LIBS += -lpthread
+	endif
+endif
+
 ifeq ($(OPERATING_SYSTEM), FreeBSD)
 	PROGRAM ?= FreeDoko
 	CXX ?= c++
