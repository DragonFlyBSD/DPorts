--- modules/ECMGeneratePkgConfigFile.cmake.orig	2023-12-20 10:53:51 UTC
+++ modules/ECMGeneratePkgConfigFile.cmake
@@ -212,7 +212,7 @@ Requires: ${PKGCONFIG_TARGET_DEPS}
   file(WRITE ${PKGCONFIG_FILENAME} "${PKGCONFIG_CONTENT}")
 
   if(EGPF_INSTALL)
-    if(CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
+    if(CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly")
       set(ECM_PKGCONFIG_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}/libdata/pkgconfig" CACHE PATH "The directory where pkgconfig will be installed to.")
     else()
       set(ECM_PKGCONFIG_INSTALL_DIR "${EGPF_LIB_INSTALL_DIR}/pkgconfig" CACHE PATH "The directory where pkgconfig will be installed to.")
