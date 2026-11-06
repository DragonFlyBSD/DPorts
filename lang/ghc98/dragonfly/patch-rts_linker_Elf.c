--- rts/linker/Elf.c.orig	2024-11-27 22:03:57 UTC
+++ rts/linker/Elf.c
@@ -1875,7 +1875,7 @@ do_Elf_Rela_relocations ( ObjectCode* oc, char* ehdrC,
                   "%s = %" PRIx64 " in %s.",
                   symbol, off, oc->fileName);
           }
-          Elf64_SWord payload = off;
+          Elf64_Sword payload = off;
           memcpy((void*)P, &payload, sizeof(payload));
           break;
       }
