--- Make.inc.intermediate	2017-01-05 09:01:20 UTC
+++ Make.inc
@@ -340,6 +340,12 @@ endif
 
 STDLIBCPP_FLAG :=
 
+ifeq ($(OS), DragonFly)
+USEGCC := 1
+USECLANG := 0
+USE_SYSTEM_LIBUNWIND := 0
+endif
+
 ifeq ($(OS), FreeBSD)
 USEGCC := 0
 USECLANG := 1
@@ -901,6 +907,11 @@ else #Linux
 JLIBLDFLAGS :=
 endif
 
+ifeq ($(OS), DragonFly)
+JLDFLAGS := -Wl,-Bdynamic
+OSLIBS += -lkvm -lrt -Wl,--export-dynamic -Wl,--version-script=$(JULIAHOME)/src/julia.expmap $(NO_WHOLE_ARCHIVE)
+endif
+
 ifeq ($(OS), FreeBSD)
 JLDFLAGS := -Wl,-Bdynamic
 OSLIBS += -lelf -lkvm -lrt -Wl,--export-dynamic -Wl,--version-script=$(JULIAHOME)/src/julia.expmap $(NO_WHOLE_ARCHIVE) $(LIBUNWIND)
