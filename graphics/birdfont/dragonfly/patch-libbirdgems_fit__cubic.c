--- libbirdgems/fit_cubic.c.intermediate	2020-11-26 17:27:01.000000000 +0000
+++ libbirdgems/fit_cubic.c
@@ -24,7 +24,7 @@ Adapted to BirdFont by Johan Mattsson 20
 
 #ifdef MAC
 #include <malloc/malloc.h>
-#elif __FreeBSD__
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <stdlib.h>
 #else
 #include <malloc.h>
