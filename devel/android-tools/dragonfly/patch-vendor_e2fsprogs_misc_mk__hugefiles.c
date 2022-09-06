--- vendor/e2fsprogs/misc/mk_hugefiles.c.orig	2022-06-10 23:11:16 UTC
+++ vendor/e2fsprogs/misc/mk_hugefiles.c
@@ -37,7 +37,7 @@ extern int optind;
 #endif
 #include <sys/types.h>
 #include <sys/stat.h>
-#if defined(HAVE_SYS_SYSMACROS_H) && !defined(__FreeBSD__)
+#if defined(HAVE_SYS_SYSMACROS_H) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <sys/sysmacros.h>
 #endif
 #include <libgen.h>
