--- libelfsh/relinject.c.orig	2003-08-21 04:33:53.000000000 +0300
+++ libelfsh/relinject.c
@@ -347,7 +347,7 @@ static int	elfsh_inject_etrel_section(el
   writable = elfsh_get_section_writableflag(sect->shdr);
 
   /* FreeBSD is incompatible with pre-interp injection */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   mode     = ELFSH_DATA_INJECTION;
 #else
   mode     = (writable ? ELFSH_DATA_INJECTION : ELFSH_CODE_INJECTION);
