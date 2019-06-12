--- src/arch/gtk3/archdep_unix.h.orig	2018-08-13 18:18:06 UTC
+++ src/arch/gtk3/archdep_unix.h
@@ -96,7 +96,7 @@ const char *archdep_pref_path;
 
 #define LIBDIR VICEDIR
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #define DOCDIR PREFIX "/share/doc/vice"
 #else
 #define DOCDIR LIBDIR "/doc"
