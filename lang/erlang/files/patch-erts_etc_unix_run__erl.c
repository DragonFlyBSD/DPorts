
$FreeBSD: ports/lang/erlang/files/patch-erts_etc_unix_run__erl.c,v 1.4 2012/11/17 05:58:49 svnexp Exp $

--- erts/etc/unix/run_erl.c.orig
+++ erts/etc/unix/run_erl.c
@@ -69,9 +69,6 @@
 #ifdef HAVE_UTMP_H
 #  include <utmp.h>
 #endif
-#ifdef HAVE_UTIL_H
-#  include <util.h>
-#endif
 #ifdef HAVE_SYS_IOCTL_H
 #  include <sys/ioctl.h>
 #endif
