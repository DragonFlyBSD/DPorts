--- src/avrdude/libavrdude.h.intermediate	2021-02-03 19:58:57 UTC
+++ src/avrdude/libavrdude.h
@@ -950,7 +950,7 @@ int read_config_builtin();
 // Header file for alloca()
 #if defined(WIN32NATIVE)
 #  include <malloc.h>
-#elif defined __FreeBSD__
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <stdlib.h>
 #else
 #  include <alloca.h>
