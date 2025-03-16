--- cmakescripts/GNUInstallDirs.cmake.orig	2024-05-06 22:24:15 UTC
+++ cmakescripts/GNUInstallDirs.cmake
@@ -315,11 +315,7 @@ GNUInstallDirs_set_install_dir(INFODIR
   "The directory into which info documentation files should be installed")
 
 if(NOT DEFINED CMAKE_INSTALL_DEFAULT_MANDIR)
-  if(CMAKE_SYSTEM_NAME MATCHES "^(([^k].*)?BSD|DragonFly)$" AND NOT CMAKE_SYSTEM_NAME MATCHES "^(FreeBSD)$")
-    set(CMAKE_INSTALL_DEFAULT_MANDIR "man")
-  else()
     set(CMAKE_INSTALL_DEFAULT_MANDIR "<CMAKE_INSTALL_DATAROOTDIR>/man")
-  endif()
 endif()
 GNUInstallDirs_set_install_dir(MANDIR
   "The directory under which man pages should be installed")
