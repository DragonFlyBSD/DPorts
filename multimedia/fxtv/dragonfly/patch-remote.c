--- remote.c.intermediate	2016-07-15 14:38:52 UTC
+++ remote.c
@@ -46,12 +46,7 @@
 #include <sys/socket.h>
 #include <sys/un.h>
 #ifdef __FreeBSD__
-# include <sys/param.h>
-# if __FreeBSD_version >= 500013
-#  include <sys/mouse.h>
-# else
-#  include <machine/mouse.h>
-# endif
+# include <sys/mouse.h>
 #else
 # include <machine/mouse.h>
 #endif
