--- Modules/IO/TransformBase/include/itkTransformIOBase.h.orig	2017-06-02 16:43:23.000000000 +0300
+++ Modules/IO/TransformBase/include/itkTransformIOBase.h
@@ -28,7 +28,7 @@
 #include <string>
 
 #ifndef ITKIOTransformBase_TEMPLATE_EXPORT
-  #if defined(ITK_TEMPLATE_VISIBILITY_DEFAULT) || defined(__linux__) && defined(ITK_BUILD_SHARED_LIBS)
+  #if defined(ITK_TEMPLATE_VISIBILITY_DEFAULT) || (defined(__DragonFly__) || defined(__linux__)) && defined(ITK_BUILD_SHARED_LIBS)
     // Make everything visible
     #define ITKIOTransformBase_TEMPLATE_EXPORT __attribute__ ((visibility ("default")))
   #else
