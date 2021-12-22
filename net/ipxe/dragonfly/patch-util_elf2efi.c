--- util/elf2efi.c.orig	2021-07-27 12:50:36 UTC
+++ util/elf2efi.c
@@ -125,6 +125,29 @@
 #define R_ARM_V4BX 40
 #endif
 
+#ifndef R_386_NONE
+#define R_386_NONE 0
+#endif
+#ifndef R_386_32
+#define R_386_32 1
+#endif
+#ifndef R_386_PC32
+#define R_386_PC32 2
+#endif
+
+#ifndef R_ARM_NONE
+#define R_ARM_NONE 0
+#endif
+#ifndef R_ARM_ABS32
+#define R_ARM_ABS32 2
+#endif
+#ifndef R_ARM_REL32
+#define R_ARM_REL32 3
+#endif
+#ifndef R_ARM_THM_PC22
+#define R_ARM_THM_PC22 10
+#endif
+
 /**
  * Alignment of raw data of sections in the image file
  *
