--- examples/parallel_for/tachyon/src/types.hpp.orig	2021-10-04 09:50:18 UTC
+++ examples/parallel_for/tachyon/src/types.hpp
@@ -48,7 +48,7 @@
 #elif _WIN32
 #include <malloc.h>
 #define alloca _alloca
-#elif __FreeBSD__ || __NetBSD__ || __OpenBSD__
+#elif __FreeBSD__ || __NetBSD__ || __OpenBSD__ || __DragonFly__
 #include <stdlib.h>
 #else
 #include <alloca.h>
