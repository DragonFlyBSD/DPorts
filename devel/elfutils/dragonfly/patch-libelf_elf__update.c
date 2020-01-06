--- libelf/elf_update.c.orig	2020-01-05 17:11:19 UTC
+++ libelf/elf_update.c
@@ -95,12 +95,14 @@ write_file (Elf *elf, off_t size, int ch
 	  && (elf->maximum_size == ~((size_t) 0)
 	      || (size_t) size > elf->maximum_size))
 	{
+#ifndef __DragonFly__
 	  if (unlikely (posix_fallocate (elf->fildes, 0, size) != 0))
 	    if (errno == ENOSPC)
 	      {
 		__libelf_seterrno (ELF_E_WRITE_ERROR);
 		return -1;
 	      }
+#endif
 
 	  /* Extend the mmap address if needed.  */
 	  if (elf->cmd == ELF_C_RDWR_MMAP
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
