--- UI/cmake/os-freebsd.cmake.orig	2023-06-18 22:05:22 UTC
+++ UI/cmake/os-freebsd.cmake
@@ -1,6 +1,6 @@
 target_sources(obs-studio PRIVATE platform-x11.cpp)
 target_compile_definitions(obs-studio PRIVATE OBS_INSTALL_PREFIX="${OBS_INSTALL_PREFIX}")
-target_link_libraries(obs-studio PRIVATE Qt::GuiPrivate procstat)
+target_link_libraries(obs-studio PRIVATE Qt::GuiPrivate)
 
 if(TARGET OBS::python)
   find_package(Python REQUIRED COMPONENTS Interpreter Development)
