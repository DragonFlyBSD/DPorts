--- gcc/config/i386/dragonfly64.h.orig	2013-09-12 14:44:03.000000000 +0000
+++ gcc/config/i386/dragonfly64.h
@@ -0,0 +1,5 @@
+/* Definitions for AMD x86_64 running DragonFly BSD with ELF Format */
+
+#undef  TARGET_VERSION
+#define TARGET_VERSION fprintf (stderr, " (x86-64 DragonFly/ELF)");
+
