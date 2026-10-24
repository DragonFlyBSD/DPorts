--- Modules/IO/TransformBase/include/itkTransformIOBase.h.orig	2022-11-24 13:15:41 UTC
+++ Modules/IO/TransformBase/include/itkTransformIOBase.h
@@ -29,7 +29,7 @@
 #include <string>
 
 #ifndef ITKIOTransformBase_TEMPLATE_EXPORT
-#  if defined(ITK_TEMPLATE_VISIBILITY_DEFAULT) || defined(__linux__) && defined(ITK_BUILD_SHARED_LIBS)
+#  if defined(ITK_TEMPLATE_VISIBILITY_DEFAULT) || (defined(__DragonFly__) || defined(__linux__)) && defined(ITK_BUILD_SHARED_LIBS)
 // Make everything visible
 #    define ITKIOTransformBase_TEMPLATE_EXPORT __attribute__((visibility("default")))
 #  else
