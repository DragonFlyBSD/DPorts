--- rts/Linker.c.orig	2012-06-06 17:10:25.000000000 +0000
+++ rts/Linker.c
@@ -121,6 +121,10 @@
 #define ALWAYS_PIC
 #endif
 
+#if defined(dragonfly_HOST_OS)
+#include <sys/tls.h>
+#endif
+
 /* Hash table mapping symbol names to Symbol */
 static /*Str*/HashTable *symhash;
 
@@ -4832,6 +4836,26 @@ do_Elf_Rela_relocations ( ObjectCode* oc
           break;
       }
 
+#if defined(dragonfly_HOST_OS)
+      case R_X86_64_GOTTPOFF:
+      {
+#if defined(ALWAYS_PIC)
+          barf("R_X86_64_GOTTPOFF relocation, but ALWAYS_PIC.");
+#else
+          /* determine the offset of S to the current thread's tls
+             area 
+             XXX: Move this to the beginning of function */
+          struct tls_info ti;
+          get_tls_area(0, &ti, sizeof(ti));
+          /* make entry in GOT that contains said offset */
+          StgInt64 gotEntry = (StgInt64) &makeSymbolExtra(oc, ELF_R_SYM(info), 
+                                         (S - (Elf64_Addr)(ti.base)))->addr;
+          *(Elf64_Word *)P = gotEntry + A - P;
+#endif
+          break;
+      }
+#endif
+
       case R_X86_64_PLT32:
       {
 #if defined(ALWAYS_PIC)
