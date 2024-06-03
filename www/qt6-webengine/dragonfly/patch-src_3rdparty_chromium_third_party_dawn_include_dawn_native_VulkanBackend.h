diff --git third_party/dawn/include/dawn/native/VulkanBackend.h third_party/dawn/include/dawn/native/VulkanBackend.h
index 873f20f1978..7fe0ecf9675 100644
--- src/3rdparty/chromium/third_party/dawn/include/dawn/native/VulkanBackend.h
+++ src/3rdparty/chromium/third_party/dawn/include/dawn/native/VulkanBackend.h
@@ -82,7 +82,8 @@ struct ExternalImageExportInfoVk : ExternalImageExportInfo {
 };
 
 // Can't use DAWN_PLATFORM_IS(LINUX) since header included in both Dawn and Chrome
-#if defined(__linux__) || defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__OpenBSD__) || defined(__FreeBSD__) || \
+  defined(__DragonFly__)
 
 // Common properties of external images represented by FDs. On successful import the file
 // descriptor's ownership is transferred to the Dawn implementation and they shouldn't be
