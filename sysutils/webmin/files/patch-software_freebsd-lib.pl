
$FreeBSD: sysutils/webmin/files/patch-software_freebsd-lib.pl 329458 2013-10-05 13:45:02Z olgeni $

--- software/freebsd-lib.pl.orig
+++ software/freebsd-lib.pl
@@ -21,7 +21,7 @@
 
 sub use_pkg_ng
 {
-return 0 if (!-x "/usr/sbin/pkg");
+return 0 if (!-e "/var/db/pkg/local.sqlite");
 local @lines = &backquote_command("/usr/sbin/pkg info 2>/dev/null </dev/null");
 return @lines > 1 ? 1 : 0;
 }
