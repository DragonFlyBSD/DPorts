--- cmake/Modules/WaffleDefineOS.cmake.intermediate	2016-07-09 15:50:03 UTC
+++ cmake/Modules/WaffleDefineOS.cmake
@@ -25,6 +25,8 @@
 
 if("${CMAKE_SYSTEM_NAME}" STREQUAL "Linux")
     set(waffle_on_linux true)
+elseif("${CMAKE_SYSTEM_NAME}" STREQUAL "DragonFly")
+    set(waffle_on_freebsd true)
 elseif("${CMAKE_SYSTEM_NAME}" STREQUAL "FreeBSD")
     set(waffle_on_freebsd true)
 elseif("${CMAKE_SYSTEM_NAME}" STREQUAL "Darwin")
