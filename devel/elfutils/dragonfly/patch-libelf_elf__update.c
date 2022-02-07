--- libelf/elf_update.c.orig	2020-01-05 17:11:19 UTC
+++ libelf/elf_update.c
@@ -108,7 +110,11 @@ write_file (Elf *elf, off_t size, int ch
 	    {
 	      if (munmap (elf->map_address, elf->maximum_size) != 0 ||
 			  mmap (elf->map_address, size, PROT_READ | PROT_WRITE,
+#ifdef __DragonFly__
+			  MAP_SHARED | MAP_FIXED | MAP_TRYFIXED, elf->fildes,
+#else
 			  MAP_SHARED | MAP_FIXED | MAP_EXCL, elf->fildes,
+#endif
 			  0) == MAP_FAILED)
 		{
 		  elf->map_address = NULL;
