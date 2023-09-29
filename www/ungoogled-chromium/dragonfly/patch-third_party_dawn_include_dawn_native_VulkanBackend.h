diff --git third_party/dawn/include/dawn/native/VulkanBackend.h third_party/dawn/include/dawn/native/VulkanBackend.h
index 41042331c64..56545d84830 100644
--- third_party/dawn/include/dawn/native/VulkanBackend.h
+++ third_party/dawn/include/dawn/native/VulkanBackend.h
@@ -80,7 +80,8 @@ struct ExternalImageExportInfoVk : ExternalImageExportInfo {
 };
 
 // Can't use DAWN_PLATFORM_IS(LINUX) since header included in both Dawn and Chrome
-#if defined(__linux__) || defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__OpenBSD__) || defined(__FreeBSD__) || \
+  defined(__DragonFly__)
 
 // Common properties of external images represented by FDs. On successful import the file
 // descriptor's ownership is transferred to the Dawn implementation and they shouldn't be
