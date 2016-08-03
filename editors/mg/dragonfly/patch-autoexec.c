--- autoexec.c.intermediate	2016-08-01 16:12:21 UTC
+++ autoexec.c
@@ -9,7 +9,7 @@
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
-#ifndef __OpenBSD__
+#if !defined(__OpenBSD__) && !defined(__DragonFly__)
 #include <stdlib.h>
 #include <malloc_np.h>
 #endif
