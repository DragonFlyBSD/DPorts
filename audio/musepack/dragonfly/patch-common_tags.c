--- common/tags.c.orig	2008-11-01 23:21:42 UTC
+++ common/tags.c
@@ -34,7 +34,7 @@
 #endif
 
 // Path separator
-#if defined __unix__  ||  defined __bsdi__  ||  defined __FreeBSD__  ||  defined __OpenBSD__  ||  defined __NetBSD__  ||  defined __APPLE__
+#if defined __unix__  ||  defined __bsdi__  ||  defined __FreeBSD__  ||  defined __OpenBSD__  ||  defined __NetBSD__  ||  defined __APPLE__ || defined __DragonFly__
 # define PATH_SEP               '/'
 # define DRIVE_SEP              '\0'
 #elif defined _WIN32  ||  defined __TURBOC__  ||  defined __ZTC__  ||  defined _MSC_VER
