diff --git third_party/blink/renderer/platform/wtf/thread_specific.h third_party/blink/renderer/platform/wtf/thread_specific.h
index 05247e1cd5c..03e63b1c507 100644
--- third_party/blink/renderer/platform/wtf/thread_specific.h
+++ third_party/blink/renderer/platform/wtf/thread_specific.h
@@ -104,7 +104,8 @@ inline bool ThreadSpecific<T>::IsSet() {
 template <typename T>
 inline ThreadSpecific<T>::operator T*() {
   T* off_thread_ptr;
-#if defined(__GLIBC__) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FREEBSD)
+#if defined(__GLIBC__) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FREEBSD) || \
+  BUILDFLAG(IS_DRAGONFLY)
   // TLS is fast on these platforms.
   // TODO(csharrison): Qualify this statement for Android.
   const bool kMainThreadAlwaysChecksTLS = true;
diff --git third_party/boringssl/src/include/stdatomic.h third_party/boringssl/src/include/stdatomic.h
new file mode 100644
index 00000000000..b4845a74e49
