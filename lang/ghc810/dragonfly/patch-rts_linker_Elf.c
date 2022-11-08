--- rts/linker/Elf.c.orig	2020-02-24 23:55:56 UTC
+++ rts/linker/Elf.c
@@ -1727,7 +1727,7 @@ do_Elf_Rela_relocations ( ObjectCode* oc
                   "%s = %" PRIx64 " in %s.",
                   symbol, off, oc->fileName);
           }
-          Elf64_SWord payload = off;
+          Elf64_Sword payload = off;
           memcpy((void*)P, &payload, sizeof(payload));
 #endif
           break;
