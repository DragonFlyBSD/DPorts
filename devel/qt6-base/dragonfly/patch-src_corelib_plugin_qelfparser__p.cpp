--- src/corelib/plugin/qelfparser_p.cpp.orig	2022-11-06 10:08:02.470756000 +0100
+++ src/corelib/plugin/qelfparser_p.cpp	2022-11-06 10:08:11.100565000 +0100
@@ -56,6 +56,11 @@
 #  error "Need ELF header to parse plugins."
 #endif
 
+#if defined(__DragonFly__)
+#define EM_AARCH64 183
+typedef Elf_Note Elf32_Nhdr;
+#endif
+
 QT_BEGIN_NAMESPACE
 
 // ### Qt7: propagate the constant and eliminate dead code
