--- musserv/musserver.h.orig	1999-10-23 11:02:21.000000000 +0200
+++ musserv/musserver.h
@@ -30,7 +30,7 @@
 #    define ENABLE_AWE
 #    include <linux/awe_voice.h>
 #  endif
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <machine/soundcard.h>
 #  include <awe_voice.h>
 #endif
