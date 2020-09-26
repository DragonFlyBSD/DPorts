--- solenv/gbuild/platform/DRAGONFLY_X86_64_GCC.mk.orig	2014-06-12 08:25:19.000000000 +0000
+++ solenv/gbuild/platform/DRAGONFLY_X86_64_GCC.mk
@@ -13,6 +13,6 @@ gb_COMPILERDEFAULTOPTFLAGS := -O2
 
 include $(GBUILDDIR)/platform/unxgcc.mk
 
-gb_CppunitTest_CPPTESTPRECOMMAND := LD_LIBRARY_PATH=$(WORKDIR)/UnpackedTarball/cppunit/src/cppunit/.libs:/usr/pkg/lib
+gb_CppunitTest_CPPTESTPRECOMMAND := LD_LIBRARY_PATH=$(INSTDIR)/program
 
 # vim: set noet sw=4:
