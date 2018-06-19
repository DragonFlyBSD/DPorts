hmmm?

--- src/3rdparty/chromium/gpu/config/gpu_info_collector.cc.intermediate	2018-05-26 13:48:33.000000000 +0000
+++ src/3rdparty/chromium/gpu/config/gpu_info_collector.cc
@@ -193,7 +193,7 @@ CollectInfoResult CollectGraphicsInfoGL(
   gpu_info->pixel_shader_version = glsl_version;
   gpu_info->vertex_shader_version = glsl_version;
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__)
   IdentifyActiveGPU(gpu_info);
   return CollectDriverInfoGL(gpu_info);
 #endif
