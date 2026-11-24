--- cmake/Config.cmake.orig
+++ cmake/Config.cmake
@@ -3,7 +3,7 @@
     set(SFML_OS_WINDOWS 1)
 elseif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
     set(SFML_OS_LINUX 1)
-elseif(${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD")
+elseif(${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD|DragonFly")
     set(SFML_OS_FREEBSD 1)
 elseif(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
     set(SFML_OS_MACOSX 1)
