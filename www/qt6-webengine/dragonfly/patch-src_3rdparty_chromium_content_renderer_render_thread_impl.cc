diff --git content/renderer/render_thread_impl.cc content/renderer/render_thread_impl.cc
index c43806e5de1..cbb3fb5d492 100644
--- src/3rdparty/chromium/content/renderer/render_thread_impl.cc
+++ src/3rdparty/chromium/content/renderer/render_thread_impl.cc
@@ -193,7 +193,7 @@
 
 #if BUILDFLAG(IS_MAC)
 #include <malloc/malloc.h>
-#elif !BUILDFLAG(IS_OPENBSD)
+#elif !BUILDFLAG(IS_OPENBSD) && !BUILDFLAG(IS_DRAGONFLY)
 #include <malloc.h>
 #endif
 
