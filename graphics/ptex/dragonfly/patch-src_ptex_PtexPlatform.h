--- src/ptex/PtexPlatform.h.intermediate	2019-04-08 17:49:01 UTC
+++ src/ptex/PtexPlatform.h
@@ -62,7 +62,7 @@ OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 
 // linux/unix/posix
 #include <stdlib.h>
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <alloca.h>
 #endif
 #include <string.h>
