diff --git third_party/brotli/common/platform.h third_party/brotli/common/platform.h
index 4e470b6e289..f5f07239682 100644
--- third_party/brotli/common/platform.h
+++ third_party/brotli/common/platform.h
@@ -30,7 +30,7 @@
 
 #if defined(OS_LINUX) || defined(OS_CYGWIN) || defined(__EMSCRIPTEN__) || defined(OS_BSD)
 #include <endian.h>
-#elif defined(OS_FREEBSD)
+#elif defined(OS_FREEBSD) || defined(OS_DRAGONFLY)
 #include <machine/endian.h>
 #elif defined(OS_MACOSX)
 #include <machine/endian.h>
