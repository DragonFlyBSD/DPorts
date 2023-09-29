diff --git third_party/lzma_sdk/C/CpuArch.c third_party/lzma_sdk/C/CpuArch.c
index d848ac199b7..59aac42a131 100644
--- third_party/lzma_sdk/C/CpuArch.c
+++ third_party/lzma_sdk/C/CpuArch.c
@@ -445,7 +445,7 @@ MY_HWCAP_CHECK_FUNC (AES)
 
 #include <sys/auxv.h>
 
-#if !defined(ARMV8_OS_FUCHSIA) && !defined(__FreeBSD__)
+#if !defined(ARMV8_OS_FUCHSIA) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #define USE_HWCAP
 #endif // !defined(ARMV8_OS_FUCHSIA)
 
