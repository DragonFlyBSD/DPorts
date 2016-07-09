--- source/iked/iked.h.orig	2013-05-16 03:31:50.000000000 +0300
+++ source/iked/iked.h
@@ -73,14 +73,18 @@
 #  include <sys/param.h>
 #  include <sys/socket.h>
 #  include <net/if.h>
+#ifdef __DragonFly__
+#include <net/tap/if_tap.h>
+#else
 #  ifndef __APPLE__
 #   include <net/if_tap.h>
 #  else
 #   include <sys/sysctl.h>
 #   include "compat/tun_ioctls.h"
 #  endif
+#endif
 # endif
-# ifdef __FreeBSD__
+# if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/linker.h>
 # endif
 # include "compat/winstring.h"
