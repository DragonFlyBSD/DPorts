--- rts/linker/Elf.c.orig	2025-03-02 13:05:33 UTC
+++ rts/linker/Elf.c
@@ -1871,7 +1871,7 @@ do_Elf_Rela_relocations ( ObjectCode* oc, char* ehdrC,
                   "%s = %" PRIx64 " in %s.",
                   symbol, off, oc->fileName);
           }
-          Elf64_SWord payload = off;
+          Elf64_Sword payload = off;
           memcpy((void*)P, &payload, sizeof(payload));
           break;
       }
