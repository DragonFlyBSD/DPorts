--- include/ogl_defs.h.bak	2015-12-05 18:23:43.000000000 +0200
+++ include/ogl_defs.h
@@ -235,7 +235,7 @@ extern PFNGLUNIFORM1FVARBPROC					glUnif
 
 #else //GL_VERSION_20
 
-#  if defined(__macosx__) || defined(__FreeBSD__)
+#  if defined(__macosx__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #    define glCreateShaderObject   glCreateShaderObjectARB
 #    define glShaderSource         glShaderSourceARB
 #    define glCompileShader        glCompileShaderARB
