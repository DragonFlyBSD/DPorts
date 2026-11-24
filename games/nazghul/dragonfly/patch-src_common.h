--- src/common.h.orig
+++ src/common.h
@@ -269,6 +269,8 @@
 
 #define perror_sdl(msg) err("%s: %s\n", (msg), SDL_GetError())
 // #define perror_sdl(msg) fprintf(stderr, "%s:%s\n", (msg), SDL_GetError())
+/* libstdc++'s math.h pulls in <limits>, which the macros below break */
+#include <math.h>
 #define max(a,b) ((a) > (b) ? (a) : (b))
 #define min(a,b) ((a) < (b) ? (a) : (b))
 #define clamp(v,a,b) ((v) = (v) < (a) ? (a) : ((v) > (b) ? (b) : (v)))
