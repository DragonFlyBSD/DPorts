--- os/dragonfly/ccconfig.h	2011-02-26 09:35:32.000000000 +0200
+++ os/dragonfly/ccconfig.h
@@ -46,9 +46,9 @@
 #else
 #define	CRT0FILE "/usr/lib/crt1.o"
 #define	CRT0FILE_PROFILE "/usr/lib/gcrt1.o"
-#define	STARTFILES { "/usr/lib/crti.o", "/usr/lib/gcc41/crtbegin.o", NULL }
-#define	LIBCLIBS { "-lc", "-L/usr/lib/gcc41", "-lgcc", NULL }
-#define	ENDFILES { "/usr/lib/gcc41/crtend.o", "/usr/lib/crtn.o", NULL }
+#define	STARTFILES { "/usr/lib/crti.o", "/usr/lib/gcc50/crtbegin.o", NULL }
+#define	LIBCLIBS { "-lc", "-L/usr/lib/gcc50", "-lgcc", NULL }
+#define	ENDFILES { "/usr/lib/gcc50/crtend.o", "/usr/lib/crtn.o", NULL }
 #endif
 
 #define STARTLABEL "_start"
