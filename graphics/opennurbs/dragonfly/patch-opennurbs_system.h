--- opennurbs_system.h.orig
+++ opennurbs_system.h
@@ -387,6 +387,8 @@
 #pragma ON_PRAGMA_WARNING_BEFORE_DIRTY_INCLUDE
 #if defined(ON_COMPILER_CLANG) && defined(ON_RUNTIME_APPLE)
 #include <malloc/malloc.h>
+#elif defined(__DragonFly__)
+/* No malloc.h on DragonFly; <stdlib.h> above already declares malloc. */
 #else
 #include <malloc.h>
 #endif
