--- winpr/libwinpr/crt/alignment.c.orig
+++ winpr/libwinpr/crt/alignment.c
@@ -39,7 +39,7 @@
 
 #ifdef __APPLE__
 #include <malloc/malloc.h>
-#elif __FreeBSD__ || __OpenBSD__
+#elif __FreeBSD__ || __OpenBSD__ || __DragonFly__
 #include <stdlib.h>
 #else
 #include <malloc.h>
