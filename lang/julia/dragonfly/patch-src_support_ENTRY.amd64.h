--- src/support/ENTRY.amd64.h.orig	2016-09-20 05:54:21.000000000 +0300
+++ src/support/ENTRY.amd64.h
@@ -36,7 +36,7 @@
 #define _START_ENTRY .p2align 4,0x90
 #define STR(csym)           #csym
 #define XSTR(csym)          STR(csym)
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__ELF__)
+#if defined(__linux__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__ELF__)
 #ifndef __APPLE__
 #define EXT_(csym)          csym
 #define EXT(csym)           EXT_(csym)
