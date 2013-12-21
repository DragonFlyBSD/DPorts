--- src/unix/usystem.c.orig	2011-05-15 03:59:36.000000000 +0000
+++ src/unix/usystem.c
@@ -190,6 +190,9 @@ void _unix_read_os_type(void)
       else if (!strcmp(utsn.sysname, "SunOS")) {
 	 os_type = OSTYPE_SUNOS;
       }
+      else if (!strcmp(utsn.sysname, "DragonFly")) {
+	 os_type = OSTYPE_FREEBSD;
+      }
       else if (!strcmp(utsn.sysname, "FreeBSD")) {
 	 os_type = OSTYPE_FREEBSD;
       }
