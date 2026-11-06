--- rts/linker/Elf.c.orig	2026-03-26 05:06:13 UTC
+++ rts/linker/Elf.c
@@ -1897,7 +1897,7 @@ do_Elf_Rela_relocations ( ObjectCode* oc, char* ehdrC,
                   "%s = %" PRIx64 " in %s.",
                   symbol, off, oc->fileName);
           }
-          Elf64_SWord payload = off;
+          Elf64_Sword payload = off;
           memcpy((void*)P, &payload, sizeof(payload));
           break;
       }
