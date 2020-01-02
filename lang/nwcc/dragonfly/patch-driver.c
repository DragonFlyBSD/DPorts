--- driver.c.orig	2014-08-17 16:28:11 UTC
+++ driver.c
@@ -199,6 +199,12 @@ driver(char **cpp_flags, char *asm_flags
 				"--dynamic-linker " RTLDDIR_64 "ld-linux-x86-64.so.2 ");
 #undef LIBDIR64
 #undef RTLDDIR_64
+		} else if (sd_host_sys == OS_DRAGONFLYBSD) {
+			sprintf(ld_pre_std_flags, sharedflag? "-shared": "/usr/lib/crt1.o");
+			sprintf(ld_std_flags,
+				"-dynamic-linker /usr/libexec/ld-elf.so.2 "
+				"/usr/lib/crti.o /usr/lib/crtbegin.o "
+				"-L/usr/lib -lc /usr/lib/crtend.o /usr/lib/crtn.o ");
 		} else if (sd_host_sys == OS_FREEBSD) {
 			sprintf(ld_pre_std_flags, sharedflag? "-shared": "/usr/lib/crt1.o");
 			sprintf(ld_std_flags, "/usr/lib/crti.o "
