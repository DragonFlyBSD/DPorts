--- deps/makefiles/build.mak.intermediate	2019-05-30 17:49:23.000000000 +0000
+++ deps/makefiles/build.mak
@@ -53,6 +53,9 @@ endif
 ifeq ($(PLATFORM),GNULINUX)
 CFLAGS += -fPIC
 CXXFLAGS += -fPIC
+else ifeq ($(PLATFORM),DRAGONFLY)
+CFLAGS += -fPIC
+CXXFLAGS += -fPIC
 else ifeq ($(PLATFORM),FREEBSD)
 CFLAGS += -fPIC
 CXXFLAGS += -fPIC
