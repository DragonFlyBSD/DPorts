--- libpolyml/elfexport.cpp.orig	2011-10-20 15:55:15.000000000 +0000
+++ libpolyml/elfexport.cpp
@@ -180,7 +180,11 @@ void ELFExport::ScanConstant(byte *addr,
             setRelocationAddress(addr, &reloc.r_offset);
              // We seem to need to subtract 4 bytes to get the correct offset in ELF
             offset -= 4;
+#if defined(HOSTARCHITECTURE_X86)
             reloc.r_info = ELFXX_R_INFO(AreaToSym(aArea), R_386_PC32);
+#else
+            reloc.r_info = ELFXX_R_INFO(AreaToSym(aArea), R_X86_64_PC32);
+#endif
             for (unsigned i = 0; i < 4; i++)
             {
                 addr[i] = (byte)(offset & 0xff);
