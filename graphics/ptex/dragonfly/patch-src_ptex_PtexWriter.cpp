--- src/ptex/PtexWriter.cpp.orig	2025-12-12 18:58:38 UTC
+++ src/ptex/PtexWriter.cpp
@@ -42,7 +42,7 @@ OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY O
 #include <algorithm>
 #include <iostream>
 #include <sstream>
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     #include <unistd.h>
     #include <stddef.h>
 #endif
