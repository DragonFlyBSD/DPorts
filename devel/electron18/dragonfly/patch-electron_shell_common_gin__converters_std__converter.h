--- electron/shell/common/gin_converters/std_converter.h.orig	2022-08-31 15:32:07 UTC
+++ electron/shell/common/gin_converters/std_converter.h
@@ -24,7 +24,7 @@ v8::Local<v8::Value> ConvertToV8(v8::Iso
       isolate, std::forward<T>(input));
 }
 
-#if !BUILDFLAG(IS_LINUX) && !defined(OS_FREEBSD)
+#if !BUILDFLAG(IS_LINUX) && !defined(OS_FREEBSD) && !defined(OS_DRAGONFLY)
 template <>
 struct Converter<unsigned long> {  // NOLINT(runtime/int)
   static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
