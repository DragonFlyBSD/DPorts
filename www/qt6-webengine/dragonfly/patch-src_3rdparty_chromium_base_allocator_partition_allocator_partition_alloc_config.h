diff --git base/allocator/partition_allocator/partition_alloc_config.h base/allocator/partition_allocator/partition_alloc_config.h
index 51d702a893c..0eb0e6442d8 100644
--- src/3rdparty/chromium/base/allocator/partition_allocator/partition_alloc_config.h
+++ src/3rdparty/chromium/base/allocator/partition_allocator/partition_alloc_config.h
@@ -76,7 +76,7 @@ static_assert(sizeof(void*) != 8, "");
 
 // POSIX is not only UNIX, e.g. macOS and other OSes. We do use Linux-specific
 // features such as futex(2).
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_BSD)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID)
 #define PA_HAS_LINUX_KERNEL
 #endif
 
