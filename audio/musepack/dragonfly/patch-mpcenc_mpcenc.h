--- mpcenc/mpcenc.h.orig	2009-02-23 18:15:46 UTC
+++ mpcenc/mpcenc.h
@@ -159,7 +159,7 @@
 #endif
 
 // Path separator
-#if defined __unix__  ||  defined __bsdi__  ||  defined __FreeBSD__  ||  defined __OpenBSD__  ||  defined __NetBSD__  ||  defined __APPLE__
+#if defined __unix__  ||  defined __bsdi__  ||  defined __FreeBSD__  ||  defined __OpenBSD__  ||  defined __NetBSD__  ||  defined __APPLE__ || defined __DragonFly__
 # define PATH_SEP               '/'
 # define DRIVE_SEP              '\0'
 # define EXE_EXT                ""
