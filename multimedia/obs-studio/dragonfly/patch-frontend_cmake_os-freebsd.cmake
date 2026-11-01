--- frontend/cmake/os-freebsd.cmake.orig
+++ frontend/cmake/os-freebsd.cmake
@@ -7,7 +7,7 @@
     utility/system-info-posix.cpp
 )
 target_compile_definitions(obs-studio PRIVATE OBS_INSTALL_PREFIX="${OBS_INSTALL_PREFIX}")
-target_link_libraries(obs-studio PRIVATE Qt::DBus procstat)
+target_link_libraries(obs-studio PRIVATE Qt::DBus)
 
 if(Qt6_VERSION AND Qt6_VERSION VERSION_LESS "6.9.0")
   target_link_libraries(obs-studio PRIVATE Qt::GuiPrivate)
