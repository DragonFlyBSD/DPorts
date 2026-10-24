--- cmake/Functions.cmake.intermediate	2026-09-17 10:33:47 UTC
+++ cmake/Functions.cmake
@@ -103,7 +103,7 @@ function(add_linker_options target buildDir completeSt
     set(ldir_rsp "${buildDir}/${ninjaTarget}_ldir.rsp")
     set(lflags_rsp "${buildDir}/${ninjaTarget}_lflags.rsp")
     set_target_properties(${cmakeTarget} PROPERTIES STATIC_LIBRARY_OPTIONS "@${objects_rsp}")
-    if(LINUX OR ANDROID OR FREEBSD)
+    if(LINUX OR ANDROID OR FREEBSD OR DRAGONFLY)
          get_gn_arch(cpu ${TEST_architecture_arch})
 
          #QTBUG-145054#
