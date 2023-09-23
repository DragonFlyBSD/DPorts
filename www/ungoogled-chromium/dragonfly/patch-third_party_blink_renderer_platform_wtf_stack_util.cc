diff --git third_party/blink/renderer/platform/wtf/stack_util.cc third_party/blink/renderer/platform/wtf/stack_util.cc
index 39fbbf044f7..58c2ee5ea44 100644
--- third_party/blink/renderer/platform/wtf/stack_util.cc
+++ third_party/blink/renderer/platform/wtf/stack_util.cc
@@ -35,14 +35,15 @@ size_t GetUnderestimatedStackSize() {
 // correctly for the main thread.
 
 #elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || \
-    BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_FUCHSIA) || \
+    BUILDFLAG(IS_DRAGONFLY)
   // pthread_getattr_np() can fail if the thread is not invoked by
   // pthread_create() (e.g., the main thread of blink_unittests).
   // If so, a conservative size estimate is returned.
 
   pthread_attr_t attr;
   int error;
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
   pthread_attr_init(&attr);
   error = pthread_attr_get_np(pthread_self(), &attr);
 #else
@@ -56,7 +57,7 @@ size_t GetUnderestimatedStackSize() {
     pthread_attr_destroy(&attr);
     return size;
   }
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
   pthread_attr_destroy(&attr);
 #endif
 
@@ -105,10 +106,10 @@ size_t GetUnderestimatedStackSize() {
 
 void* GetStackStart() {
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || \
-    BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_DRAGONFLY)
   pthread_attr_t attr;
   int error;
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
   pthread_attr_init(&attr);
   error = pthread_attr_get_np(pthread_self(), &attr);
 #else
@@ -122,7 +123,7 @@ void* GetStackStart() {
     pthread_attr_destroy(&attr);
     return reinterpret_cast<uint8_t*>(base) + size;
   }
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
   pthread_attr_destroy(&attr);
 #endif
 #if defined(__GLIBC__)
