--- src/modules/openfx/factory.c.orig	2026-06-25 00:09:29 UTC
+++ src/modules/openfx/factory.c
@@ -25,7 +25,7 @@
 mlt_properties mltofx_context;
 mlt_properties mltofx_dl;
 
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 #define OFX_DIRLIST_SEP_CHARS ":;"
 #define OFX_DIRSEP "/"
@@ -312,7 +312,7 @@
     int dli = 0;
 
     // Scan standard platform default paths per the OpenFX specification
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
     scan_ofx_dir(repository, "/usr/OFX/Plugins", &dli, 0);
     scan_ofx_dir(repository, "/usr/local/OFX/Plugins", &dli, 0);
 #elif defined(__APPLE__)
