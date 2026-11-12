--- cmake/modules/GObjectIntrospectionMacros.cmake.orig
+++ cmake/modules/GObjectIntrospectionMacros.cmake
@@ -92,5 +92,8 @@
 
   add_custom_target(gir-girs-${_gir_name} ALL DEPENDS ${_gir_girs})
   add_custom_target(gir-typelibs-${_gir_name} ALL DEPENDS ${_gir_typelibs})
+  # With the Makefile generator each target gets its own copy of the
+  # .gir rule; build the .gir once, before anything that reads it.
+  add_dependencies(gir-typelibs-${_gir_name} gir-girs-${_gir_name})
 
 endmacro(gir_add_introspections)
