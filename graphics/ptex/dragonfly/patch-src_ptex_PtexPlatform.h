--- src/ptex/PtexPlatform.h.ori	Wed Feb 26 11:49:21 2025
+++ src/ptex/PtexPlatform.h	Wed Feb 26 11:49:38 2025
@@ -70,7 +70,7 @@ OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY O
 
 // linux/unix/posix
 #include <stdlib.h>
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) || !defined(__DragonFly__)
     #include <alloca.h>
 #endif
 #include <string.h>
