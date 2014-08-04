--- libpolyml/elfexport.cpp.orig	2013-10-15 16:25:39.000000000 +0000
+++ libpolyml/elfexport.cpp
@@ -188,7 +188,11 @@ void ELFExport::ScanConstant(byte *addr,
                 setRelocationAddress(addr, &reloc.r_offset);
                 // We seem to need to subtract 4 bytes to get the correct offset in ELF
                 offset -= 4;
+#if defined(HOSTARCHITECTURE_X86)
                 reloc.r_info = ELFXX_R_INFO(AreaToSym(aArea), R_386_PC32);
+#else
+                reloc.r_info = ELFXX_R_INFO(AreaToSym(aArea), R_X86_64_PC32);
+#endif
                 reloc.r_addend = offset;
                 // Clear the field.  Even though it's not supposed to be used with Rela the
                 // Linux linker at least seems to add the value in here sometimes.
@@ -201,7 +205,11 @@ void ELFExport::ScanConstant(byte *addr,
                 setRelocationAddress(addr, &reloc.r_offset);
                  // We seem to need to subtract 4 bytes to get the correct offset in ELF
                 offset -= 4;
+#if defined(HOSTARCHITECTURE_X86)
                 reloc.r_info = ELFXX_R_INFO(AreaToSym(aArea), R_386_PC32);
+#else
+                reloc.r_info = ELFXX_R_INFO(AreaToSym(aArea), R_X86_64_PC32);
+#endif
                 for (unsigned i = 0; i < 4; i++)
                 {
                     addr[i] = (byte)(offset & 0xff);
