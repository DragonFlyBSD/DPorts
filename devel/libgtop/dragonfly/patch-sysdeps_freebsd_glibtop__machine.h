--- sysdeps/freebsd/glibtop_machine.h.intermediate	2013-01-11 15:58:10.000000000 +0100
+++ sysdeps/freebsd/glibtop_machine.h	2013-01-11 15:59:19.000000000 +0100
@@ -26,7 +26,9 @@
 #include <nlist.h>
 #include <limits.h>
 #include <kvm.h>
+#ifndef __DragonFly__
 #include <sys/dkstat.h>
+#endif
 #include <time.h>
 #include <sys/user.h>
 #include <sys/types.h>
