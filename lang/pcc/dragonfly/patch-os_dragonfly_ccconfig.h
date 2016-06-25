--- os/dragonfly/ccconfig.h	2011-02-26 09:35:32.000000000 +0200
+++ os/dragonfly/ccconfig.h
@@ -31,34 +31,25 @@
  * Various settings that controls how the C compiler works.
  */
 
-#include <sys/param.h>
-
 /* common cpp predefines */
-#define	CPPADD	{ "-D__DragonFly__", "-D__ELF__", NULL, }
-#define	DYNLINKER { "-dynamic-linker", "/usr/libexec/ld-elf.so.2", NULL }
+#define CPPADD	{ "-D__DragonFly__", "-D__ELF__", NULL, }
 
-#if __DragonFly_version < 200202
-#define CRT0FILE "/usr/lib/gcc34/crt1.o"
-#define CRT0FILE_PROFILE "/usr/lib/gcc34/gcrt1.o"
-#define STARTFILES { "/usr/lib/gcc34/crti.o", "/usr/lib/gcc34/crtbegin.o", NULL }
-#define LIBCLIBS { "-lc", "-L/usr/lib/gcc34", "-lgcc", NULL }
-#define	ENDFILES { "/usr/lib/gcc34/crtend.o", "/usr/lib/gcc34/crtn.o", NULL }
-#else
-#define	CRT0FILE "/usr/lib/crt1.o"
-#define	CRT0FILE_PROFILE "/usr/lib/gcrt1.o"
-#define	STARTFILES { "/usr/lib/crti.o", "/usr/lib/gcc41/crtbegin.o", NULL }
-#define	LIBCLIBS { "-lc", "-L/usr/lib/gcc41", "-lgcc", NULL }
-#define	ENDFILES { "/usr/lib/gcc41/crtend.o", "/usr/lib/crtn.o", NULL }
-#endif
+#define CRT0		"crt1.o"
+#define GCRT0		"gcrt1.o"
 
 #define STARTLABEL "_start"
 
 #if defined(mach_i386)
-#define	CPPMDADD { "-D__i386__", NULL, }
+#define CPPMDADD	{ "-D__i386__", NULL, }
 #elif defined(mach_amd64)
-#define CPPMDADD \
-	{ "-D__x86_64__", "-D__x86_64", "-D__amd64__", "-D__amd64", \
-	  "-D__LP64__=1", "-D_LP64=1", NULL, }
+#define CPPMDADD	{ "-D__x86_64__", "-D__x86_64", "-D__amd64__", \
+	"-D__amd64", "-D__LP64__", "-D_LP64", NULL, }
+#define DYNLINKER { "-dynamic-linker", "/libexec/ld-elf.so.2", NULL }
+#define DEFLIBDIRS	{ "/usr/lib/", 0 }
 #else
 #error defines for arch missing
 #endif
+
+#ifdef LANG_F77
+#define F77LIBLIST { "-L/usr/local/lib", "-lF77", "-lI77", "-lm", "-lc", NULL };
+#endif
