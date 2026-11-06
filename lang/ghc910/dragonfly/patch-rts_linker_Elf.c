--- rts/linker/Elf.c.orig	2025-09-10 16:02:37 UTC
+++ rts/linker/Elf.c
@@ -1876,7 +1876,7 @@ do_Elf_Rela_relocations ( ObjectCode* oc, char* ehdrC,
                   "%s = %" PRIx64 " in %s.",
                   symbol, off, oc->fileName);
           }
-          Elf64_SWord payload = off;
+          Elf64_Sword payload = off;
           memcpy((void*)P, &payload, sizeof(payload));
           break;
       }
