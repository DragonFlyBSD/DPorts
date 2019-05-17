--- libpkg/pkg_elf.c.orig	2019-04-19 14:23:53 UTC
+++ libpkg/pkg_elf.c
@@ -799,7 +799,7 @@ elf_note_analyse(Elf_Data *data, GElf_Eh
 		if (ei->osversion != NULL)
 			*ei->osversion = version;
 #if defined(__DragonFly__)
-		xasprintf(&ei->strversion, "%d.%d", (((version / 100 % 1000)+1)/2)*2);
+		xasprintf(&ei->strversion, "%d.%d", version / 100000, (((version / 100 % 1000)+1)/2)*2);
 #elif defined(__NetBSD__)
 		xasprintf(&ei->strversion, "%d", (version + 1000000) / 100000000);
 #else
