--- debugedit.c.orig	2017-04-11 06:09:46 UTC
+++ debugedit.c
@@ -26,7 +26,7 @@
 #include <endian.h>
 #endif
 #include <errno.h>
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <error.h>
 #else
 #include <err.h>
@@ -1382,6 +1382,7 @@ edit_dwarf2 (DSO *dso)
                 rtype = ELF64_R_TYPE (rela.r_info);
                 switch (dso->ehdr.e_machine)
                     {
+#ifndef __DragonFly__
                     case EM_SPARC:
                     case EM_SPARC32PLUS:
                     case EM_SPARCV9:
@@ -1397,6 +1398,7 @@ edit_dwarf2 (DSO *dso)
                         if (rtype != R_PPC_ADDR32 && rtype != R_PPC_UADDR32)
                             goto fail;
                         break;
+#endif
                     case EM_S390:
                         if (rtype != R_390_32)
                             goto fail;
