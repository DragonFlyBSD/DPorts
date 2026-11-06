--- cegui/src/RendererModules/OpenGL/GLRenderer.cpp.orig	2016-04-23 18:19:40 UTC
+++ cegui/src/RendererModules/OpenGL/GLRenderer.cpp
@@ -46,7 +46,7 @@
 #include <sstream>
 #include <algorithm>
 
-#if defined(__linux__)  || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__HAIKU__)
+#if defined(__linux__)  || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__HAIKU__)
 #   include "CEGUI/RendererModules/OpenGL/GLXPBTextureTarget.h"
 #elif defined(_WIN32) || defined(__WIN32__)
 #   include "CEGUI/RendererModules/OpenGL/WGLPBTextureTarget.h"
@@ -319,7 +319,7 @@ void OpenGLRenderer::initialiseTextureTargetFactory(
             CEGUI_NEW_AO OGLTemplateTargetFactory<OpenGLFBOTextureTarget>;
     }
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__HAIKU__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__HAIKU__)
     // on linux (etc), we can try for GLX pbuffer support
     else if (((tt_type == TTT_AUTO) || (tt_type == TTT_PBUFFER)) &&
              GLXEW_VERSION_1_3)
